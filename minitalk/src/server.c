/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:48:30 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/24 22:13:01 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SERVER*/

#include "../include/minitalk.h"

static void	handler_sigaction(int signum, siginfo_t *info, void *ptr);
static char	*print_msg(char *msg);

int	main(void)
{
	struct sigaction	s_signal;

	s_signal.sa_flags = SA_SIGINFO;
	s_signal.sa_handler = NULL;
	s_signal.sa_sigaction = handler_sigaction;
	sigaction(SIGUSR1, &s_signal, NULL);
	sigaction(SIGUSR2, &s_signal, NULL);
	print_pid();
	while (1)
	{
		pause();
	}
	return (0);
}

static void	handler_sigaction(int signum, siginfo_t *info, void *ptr)
{
	static char	*msg = NULL;
	static char	c = 0xFF;
	static int	bit = 0;
	static pid_t	pid = 0;

	(void)ptr;
	if (!pid)
		pid = info->si_pid;
	if (signum == SIGUSR1)
		c ^= 0x80 >> bit;
	else if (signum == SIGUSR2)
		c |= 0x80 >> bit;
	if (++bit == 8)
	{
		if (c)
			msg = stradd_char(msg, c);
		else
			msg = print_msg(msg);
		bit = 0;
		c = 0xFF;
	}
	kill(pid, SIGUSR2);
}

static char	*print_msg(char *msg)
{
	ft_putstr(msg);
	free(msg);
	return (NULL);
}
