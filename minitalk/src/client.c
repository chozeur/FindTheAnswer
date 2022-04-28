/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:42:52 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/26 18:23:29 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*CLIENT*/

#include "../include/minitalk.h"

int	main(int ac, char **av)
{
	pid_t	pid;
	char	*msg;

	if (!check_args(ac, av))
		return (ft_printf("\t\t🚨 \x1b[31merror exit 🚨\n\e[0m"));
	msg = malloc(sizeof(char) * (ft_strlen(av[2]) + 1));
	pid = (pid_t)ft_atoi(av[1]);
	if (!pid || !msg)
	{
		if (!pid)
			free(msg);
		return (-1);
	}
	ft_strlcpy(msg, av[2], ft_strlen(av[2]) + 1);
	signal(SIGUSR1, handler_client);
	signal(SIGUSR2, handler_client);
	send_bit(msg, pid);
	free(msg);
	while (1)
		pause();
	return (0);
}
