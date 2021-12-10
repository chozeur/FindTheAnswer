/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_to_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:07:28 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/10 19:43:50 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int	ft_print_ul_hex(unsigned long int nb, int caps)
{
	char	*hex;
	int	len;
	int	pt_len;

	len = 0;
	pt_len = &len;
	if (caps == 0)
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb > 16)
	{	(*pt_len)++;
		ft_print_ul_hex(nb / 16, caps);
	}
	ft_putchar(hex[nb % 16]);
	return (len);
}

int	main()
{
	ft_print_ul_hex(42, 0);
	return (0);
}
