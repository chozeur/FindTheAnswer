/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_client.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 07:19:55 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/27 08:57:52 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void	handler_client(int signum)
{
	if (signum == SIGUSR2)
		send_bit(0, 0);
	if (signum == SIGUSR1)
	{
		ft_printf("\n\e[1;34mmessage delivered ☑️\n\n\e[0m");
		exit(EXIT_SUCCESS);
	}
}
