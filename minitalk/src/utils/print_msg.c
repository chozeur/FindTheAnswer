/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 07:21:36 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/27 07:21:58 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

char	*print_msg(char *msg, pid_t *pid, int *bit, char *c)
{
	ft_printf("%s\n", msg);
	free(msg);
	kill(*pid, SIGUSR2);
	*pid = 0;
	reset(bit, c);
	return (NULL);
}
