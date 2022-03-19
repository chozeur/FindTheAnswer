/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:48:30 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/19 19:10:22 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SERVER*/

#include "../include/minitalk.h"

static void	handler_sigusr(int signum, pid_t pid);

int	main(void)
{
	print_pid();
	signal(SIGUSR1, handler_sigusr);
	signal(SIGUSR2, handler_sigusr);
	while (1)
	{
		pause();
	}
	return (0);
}

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
