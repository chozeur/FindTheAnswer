/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:42:52 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/16 18:47:41 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

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
	kill(pid, SIGUSR1);
	return (0);
}
