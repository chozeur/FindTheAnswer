/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:48:30 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/18 17:27:13 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*SERVER*/

#include "../include/minitalk.h"

static void	handler_sigusr(int signum);

int	main(void)
{
	print_pid();
	signal(SIGUSR1, handler_sigusr);
	while (1)
	{
		pause();
	}
	return (0);
}

static void	handler_sigusr(int signum)
{
	if (signum == SIGUSR1)
		ft_printf("SIGUSR1 received\n");
	if (signum == SIGUSR2)
		ft_printf("SIGUSR2 received\n");
}
