/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:45:02 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/13 18:25:00 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_p(void *ptr)
{
	unsigned long int	ad;

	if (!ptr)
	{
		ft_putstr("(null)");
		return (6);
	}
	ad = (unsigned long int)ptr;
	ft_putstr("0x");
	return (ft_print_ul_hex(ad, 0) + 2);
}

/*
#include <stdio.h>

int	main()
{
	int	i;

	ft_print_p(&i);
	printf("\n%p\n", &i);
	return (0);
}
*/
