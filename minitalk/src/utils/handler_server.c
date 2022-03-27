/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_server.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 07:22:34 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/27 08:54:10 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void	handler_server(int signum, siginfo_t *sender_info, void *ptr)
{
	static char		*msg = NULL;
	static char		c = 0xFF;
	static int		bit = 0;
	static pid_t	pid = 0;

	(void)ptr;
	if (!pid)
		pid = sender_info->si_pid;
	if (signum == SIGUSR1)
		c ^= 0x80 >> bit;
	else if (signum == SIGUSR2)
		c |= 0x80 >> bit;
	if (++bit == 8)
	{
		if (c)
			msg = stradd_char(msg, c);
		else
		{
			kill(pid, SIGUSR1);
			msg = print_msg(msg, &pid, &bit, &c);
			return ;
		}
		reset(&bit, &c);
	}
	kill(pid, SIGUSR2);
}
