/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:50:09 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/02 00:08:23 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/minitalk.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		ft_putchar((int)str[i]);
		i++;
	}
	return (i);
}
