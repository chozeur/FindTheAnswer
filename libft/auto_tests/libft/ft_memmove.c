/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:34:28 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/23 18:24:44 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;
	unsigned char	*srctmp;
	size_t	i;

	tmp = (unsigned char *)dst;
	srctmp = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		tmp[i] = srctmp[i];
		i++;
	}
	tmp[i] = '\0';
	dst = tmp;
	return (dst);
}
