/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 02:31:54 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/13 02:48:14 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_x(long int nb, int caps)
{
	int	c;

	c = 0;
	if (nb < 0)
	{
		c += ft_putchar('-');
		nb *= -1;
	}
	c += ft_print_ul_hex((unsigned long int)nb, caps);
	return (c);
}

/*
int	main()
{
	int	c;

	c = ft_print_x(42, 0);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');
	
	c = ft_print_x(-42, 1);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');

	c = ft_print_x(0, 0);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');

	return (0);
}
*/
