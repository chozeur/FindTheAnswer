/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:35:11 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/23 13:30:23 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	dstlen = (size_t)ft_strlen(dst);
	i = dstlen - 1;
	j = 0;
	while (i < (dstsize - dstlen - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (ft_strlen(src));
}
