/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:29:50 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/09 20:17:51 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(int n)
{
	int	res;

	res = 0;
	if (n >= 0 && n <= 9)
	{
		res = 1;
		return (res);
	}
	if (n < 0)
		res = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		res++;
	}
	res++;
	return (res);
}

static char	*conv(char *res, unsigned int n, int size)
{
	while (n > 0)
	{
		res[size] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;

	size = nlen(n);
	res = malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	res[size] = '\0';
	size--;
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res = conv(res, n, size);
	return (res);
}
