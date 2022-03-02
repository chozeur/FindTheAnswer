/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 02:31:54 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/02 00:08:36 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/minitalk.h"

int	ft_printf_x(unsigned int nb, int caps)
{
	char	*hex;
	int		len;

	len = ft_hexlen((unsigned int long)nb);
	if (caps)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (nb > 15)
		ft_printf_x(nb / 16, caps);
	ft_putchar(hex[nb % 16]);
	return (len);
}
