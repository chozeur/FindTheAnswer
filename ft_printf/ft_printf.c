/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:30:36 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/09 19:11:34 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	va_list	ap;
	int		count;

	i = 0;
	va_start(ap, input);
	count = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (input[i + 1] == 'c')
			{
				ft_putchar(va_arg(ap, int));
				count++;
			}
			if (input[i + 1] == 's')
				count += ft_putstr(va_arg(ap, char *));
			if (input[i + 1] == 'p')
				count += ft_printf_p();
			if (input[i + 1] == 'd')
				count += ft_putnbr((long int)va_arg(ap, long int));
			if (input[i + 1] == 'i')
				count += ft_putnbr((long int)va_arg(ap, long int));
			if (input[i + 1] == 'u')
				count += ft_putnbr((long int)va_arg(ap, long int));
			if (input[i + 1] == 'x')
				count += ft_printf_x();
			if (input[i + 1] == 'X')
				count += ft_printf_X();
			if (input[i + 1] == '%')
			{
				ft_putchar('%');
				count++;
			}
		}
		else
			ft_putchar(input[i]);
		i++;
	}
	va_end(ap);
}
