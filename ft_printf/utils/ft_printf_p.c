/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:45:02 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/13 12:41:08 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf_p(void *ptr)
{
	unsigned long int	ad;

	ad = (unsigned long int)ptr;
	ft_putstr("0x");
	return (ft_print_ul_hex(ad, 0));
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
