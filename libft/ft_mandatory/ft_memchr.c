/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:33:52 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/24 15:29:01 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	*res;

	str = (unsigned char *)s;
	res = NULL;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			res = (unsigned char *)(s + i);
		i++;
	}
	return (res);
}
