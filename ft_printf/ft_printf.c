/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:30:36 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/08 21:14:21 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int	i;
	va_list	ap;

	i = 0;
	va_start(ap, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (input[i + 1] == 'c')
				ft_putchar(va_arg(ap, int));
			if (input[i + 1] == 's')
				ft_putstr(va_arg(ap, char *));
			if (input[i + 1] == 'p')
			if (input[i + 1] == 'd')
			if (input[i + 1] == 'i')
			if (input[i + 1] == 'u')
			if (input[i + 1] == 'x')
			if (input[i + 1] == 'X')
			if (input[i + 1] == '%')
				ft_putchar('%');
		}
		else
			ft_putchar(input[i]);
		i++;
	}
	va_end(ap);
}
