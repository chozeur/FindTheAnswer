/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:07:28 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/15 18:19:03 by flcarval         ###   ########.fr       */
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

int	ft_putulhex(unsigned long int nb)
{
	char	*hex;
	int		len;

	len = hex_len(nb);
	hex = "0123456789abcdef";
	if (nb == 16)
		return (ft_putstr("10"));
	if (nb > 16)
		ft_putulhex(nb / 16);
	ft_putchar(hex[nb % 16]);
	return (len);
}
