/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_null.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 07:14:10 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/27 07:15:08 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

int	send_null(pid_t pid)
{
	static int	i = -1;

	if (++i < 8)
		return (kill(pid, SIGUSR1));
	return (1);
}
