/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:42:52 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/19 19:12:24 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*CLIENT*/

#include "../include/minitalk.h"

static void	send_bit(char *msg, pid_t pid);
static void	handler_sigusr(int signum, pid_t pid, char* msg);

int	main(int ac, char **av)
{
	pid_t	pid;
	char	*msg;

	(void)ac;
	msg = malloc(sizeof(char) * (ft_strlen(av[2]) + 1));
	pid = (pid_t)ft_atoi(av[1]);
	if (!pid && !msg)
		return (-1);
	ft_strlcpy(msg, av[2], ft_strlen(av[2]) + 1);
	signal(SIGUSR1, handler_sigusr);
	signal(SIGUSR2, handler_sigusr);
	send_bit(msg, pid);
	while (1)
	{
		pause();
	}
	return (0);
}

static void	send_bit(char *msg, pid_t pid)
{
	static int	bit = 0;

	if (msg[bit / 8] & (0x80 >> bit))
		kill(pid, SIGUSR2);
	else
		kill(pid, SIGUSR1);
	bit++;
}

static void	handler_sigusr(int signum, pid_t pid, char *msg)
{
	if (signum == SIGUSR2)
		send_bit(msg, pid);
	else if (signum == SIGUSR1)
		exit(EXIT_SUCCESS);
}
