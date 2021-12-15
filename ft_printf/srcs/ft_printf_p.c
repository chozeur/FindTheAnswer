/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:45:02 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/15 18:03:58 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf_p(void *ptr)
{
	unsigned long int	ad;

	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ad = (unsigned long int)ptr;
	ft_putstr("0x");
	return (ft_putulhex(ad) + 2);
}
