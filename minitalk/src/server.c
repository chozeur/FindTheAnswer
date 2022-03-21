/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:48:30 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/21 19:01:28 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SERVER*/

#include "../include/minitalk.h"

//static void	handler_sigusr(int signum, pid_t pid);
static void	handler_sigaction(int signum, siginfo_t *info, void *ptr);

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
	static char	*msg = "";
	static char	c = 0xFF;
	static int	bit = 0;
	static pid_t	pid = 0;

	(void)ptr;
	if (!pid)
		pid = info->si_pid;
	if (bit < 8)
	{
		if (signum == SIGUSR1)
		{
			c ^= 0x80 >> bit;
			kill(pid, SIGUSR2);
			bit++;
		}
		else if (signum == SIGUSR2)
		{
			c |= 0x80 >> bit;
			kill(pid, SIGUSR2);
			bit++;
		}
	}
	else
	{
		msg = stradd_char(msg, c);
		if (c == '\0')
		{
			ft_printf("%s\n", msg);
			kill(pid, SIGUSR1);
		}
		else
			kill(pid, SIGUSR2);
		bit++;
	}
}

/* simple_handler
static void	handler_sigusr(int signum, pid_t pid)
{
	static char	*msg = "";
	static char	c = 0xFF;
	static int	bit = 0;

	if (signum == SIGUSR1)
	{
		if (bit < 8)
		{
			c ^= 0x80 >> bit;
			kill(pid, SIGUSR2);
			bit++;
		}
		else
		{
			msg = stradd_char(msg, c);
			kill(pid, SIGUSR2);
			if (c == '\0')
			{
				ft_printf("%s", msg);
				kill(pid, SIGUSR1);
			}
		}
	}
	else if (signum = SIGUSR2)
	{
		if (bit < 8)
		{
			c |= 0x80 >> bit;
			if (++bit == 8)
			{
				msg = stradd_char(msg, c);
				if (c == '\0')
				{
					ft_printf("%s", msg);
					kill(pid, SIGUSR1);
				}
				else
					kill(pid, SIGUSR2);
			}
		}
	}
}
*/
