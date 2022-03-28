/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 00:10:04 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/28 04:43:16 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void	print_pid(void)
{
	int	pid;

	pid = (int)getpid();
	ft_printf("\n\t\t\e[44mPID : %d\e[0m\n\n", pid);
}
