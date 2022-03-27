/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:20:16 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/27 09:31:15 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

void	frame(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i])
		i++;
	n = 0;
	ft_printf("\n ");
	while (n++ < i)
		ft_putchar('-');
	n = 0;
	ft_printf("\n| %s |\n ", str);
	while (n++ < i)
		ft_putchar('-');
	ft_printf("\n\n");
}
