/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:45:02 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/09 19:06:48 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static 

int		ft_print_p(void *ptr)
{
	int		count;
	long int	ad;
	char	*hex;

	hex = malloc(17);
	hex = "0123456789abcdef";
	count = 0;
	ad = (long int)ptr;
	if (ad > 16)
	{
		ft_printf_p(ad / 16);
		count++;
	}
	ft_putchar(hex[ad % 16]);
}

#include <stdio.h>

int main(void)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = &i;
	printf("printf : %p\n", ptr);
	ft_printf_p(ptr);
	return (0);
}
