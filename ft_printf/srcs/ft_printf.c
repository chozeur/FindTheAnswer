/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:30:36 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/13 18:13:25 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	va_list	ap;
	int		c;

	i = 0;
	va_start(ap, input);
	c = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (input[i + 1] == 'c')
				c += ft_putchar(va_arg(ap, int));
			if (input[i + 1] == 's')
				c += ft_putstr(va_arg(ap, char *));
			if (input[i + 1] == 'p')
				c += ft_printf_p(va_arg(ap, void *));
			if (input[i + 1] == 'd')
				c += ft_putnbr((long int)va_arg(ap, long int));
			if (input[i + 1] == 'i')
				c += ft_putnbr((long int)va_arg(ap, int));
			if (input[i + 1] == 'u')
				c += ft_putnbr((long int)va_arg(ap, long int));
			if (input[i + 1] == 'x')
				c += ft_printf_x((long int)va_arg(ap, long int), 0);
			if (input[i + 1] == 'X')
				c += ft_printf_x((long int)va_arg(ap, long int), 1);
			if (input[i + 1] == '%')
				c += ft_putchar('%');
			i ++;
		}
		else
		{
			ft_putchar(input[i]);
			c++;
		}
		i++;
	}
	va_end(ap);
	return (c);
}
