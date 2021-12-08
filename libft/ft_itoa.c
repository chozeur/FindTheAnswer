/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:29:50 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/08 17:03:50 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(int n)
{
	int	res;

	res = 0;
	if (n == -2147483648)
		return (11);
	if ((n >= 0 && n <= 9) || (n <= 0 && n >= -9))
	{
		res = 1;
		return (res);
	}
	while (n > 9 || n < -9)
	{
		n = n / 10;
		res++;
	}
	res++;
	return (res);
}

static int	isneg(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;
	long	l;

	size = nlen(n);
	res = malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	l = n * isneg(n);
	res[size] = '\0';
	while (l > 9)
	{
		res[size - 1] = l % 10 + 48;
		l = l / 10;
		size--;
	}
	if ((l >= 0 && l <= 9))
		res[size - 1] = l + 48;
	if (isneg(n) == -1)
		return (ft_strjoin("-", res));
	return (res);
}
