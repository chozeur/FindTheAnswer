/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:07:28 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/14 16:21:51 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <limits.h>

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

int	ft_putulhex(unsigned long int nb, int caps)
{
	char	*hex;
	int	len;

	len = hex_len(nb);
	if (caps == 0)
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb > 16)
	{
		ft_putulhex(nb / 16, caps);
	}
	ft_putchar(hex[nb % 16]);
	return (len);
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
