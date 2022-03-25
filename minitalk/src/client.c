/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:42:52 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/25 18:40:26 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*CLIENT*/

#include "../include/minitalk.h"

static int	send_bit(char *msg, pid_t pid);
static void	handler_sigusr(int signum);
static int	send_null(pid_t pid);

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
	free(msg);
	while (1)
		pause();
	return (0);
}

static int	send_bit(char *msg, pid_t pid)
{
	static pid_t	s_pid;
	static char		*s_msg;
	static int		bit = -1;

	if (msg)
		if (!(s_msg = ft_strdup(msg)))
			return (-1);
	if (pid)
		s_pid = pid;
	if (s_msg[(bit / 8)] && s_msg[++bit / 8])
	{
		if (s_msg[bit / 8] & (0x80 >> (bit % 8)))
			return (kill(s_pid, SIGUSR2));
		else
			return (kill(s_pid, SIGUSR1));
	}
	if (!(send_null(s_pid)))
		return (0);
	free(s_msg);
	return (1);
}

static void	handler_sigusr(int signum)
{
	int	end;

	end = 0;
	if (signum == SIGUSR2)
		end = send_bit(0, 0);
	if (end)
		exit(EXIT_SUCCESS);
}

static int	send_null(pid_t pid)
{
	static int	i = -1;

	if (++i < 8)
		return (kill(pid, SIGUSR1));
	return (1);
}
