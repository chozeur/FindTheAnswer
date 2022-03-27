/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_bit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 07:17:33 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/27 08:34:57 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

int	send_bit(char *msg, pid_t pid)
{
	static pid_t	s_pid;
	static char		*s_msg;
	static int		bit = -1;

	if (msg)
	{
		s_msg = ft_strdup(msg);
		if (!s_msg)
			return (-1);
	}
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
