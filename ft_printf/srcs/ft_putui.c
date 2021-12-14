/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:31:55 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/14 20:09:15 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	uilen(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	i++;
	return (i);
}

int	ft_putui(unsigned int nb)
{
	int	len;

	len = uilen(nb);
	if (nb > 9)
		ft_putui(nb / 10);
	ft_putchar(nb % 10 + 48);
	return (len);
}
