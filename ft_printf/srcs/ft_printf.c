/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:30:36 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/15 17:50:09 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_printf_all(va_list ap, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_printf_p(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_putui(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_printf_x(va_arg(ap, int), (c == 'X')));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

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
			c += ft_printf_all(ap, input[i + 1]);
			i++;
		}
		else
			c += ft_putchar(input[i]);
		i++;
	}
	va_end(ap);
	return (c);
}
