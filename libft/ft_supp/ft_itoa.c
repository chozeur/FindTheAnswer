/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:59:24 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/25 17:17:35 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	nlen(int n)
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

char	*ft_itoa(int n)
{
	char	*res;
	int	size;
	int	i;

	size = nlen(n);
	res = malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		res[i] = '-';
		i++;
	}
	if (n >= 0 && n <= 9)
		res[i] = n + 48;
	else if (n > 9 || n < 9)
	{
		
	}
	return (res);
}
