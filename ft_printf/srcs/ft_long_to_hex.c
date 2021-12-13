/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_to_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:07:28 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/13 18:16:26 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	hex_len(unsigned long int nb)
{
	int	len;

	len = 0;
	while (nb > 16)
	{
		nb = nb / 16;
		len++;
	}
	len++;
	return (len);
}

int	ft_print_ul_hex(unsigned long int nb, int caps)
{
	char	*hex;
	unsigned long int	NB;

	NB = nb;
	if (caps == 0)
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb > 16)
	{
		ft_print_ul_hex(nb / 16, caps);
	}
	ft_putchar(hex[nb % 16]);
	return (hex_len(NB));
}

/*
#include <limits.h>

int	main()
{
	unsigned long int	res;

	res = ft_print_ul_hex(42, 1);
	ft_putchar('\n');
	ft_putnbr(res);
	
	ft_putchar('\n');
	res = ft_print_ul_hex(0, 1);
	ft_putchar('\n');
	ft_putnbr(res);
	
	ft_putchar('\n');
	res = ft_print_ul_hex(UINT_MAX, 1);
	ft_putchar('\n');
	ft_putnbr(res);

	return (0);
}
*/
