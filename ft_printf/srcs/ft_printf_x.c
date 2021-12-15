/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 02:31:54 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/15 17:55:11 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <limits.h>

int	ft_printf_x(unsigned int nb, int caps)
{
	char	*hex;
	unsigned int	NB;

	NB = nb;
	if (caps)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (nb == 16)
		return (ft_putstr("10"));
	if (nb > 16)
		ft_printf_x(nb / 16, caps);
	ft_putchar(hex[nb % 16]);
	return (ft_hexlen((unsigned long int)NB));
}

/*
int	main()
{
	int	c;

	c = ft_printf_x(42, 0);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');
	
	c = ft_printf_x(-42, 0);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');

	c = ft_printf_x(0, 0);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');

	return (0);
}
*/
