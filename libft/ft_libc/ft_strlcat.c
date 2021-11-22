/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:35:11 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/22 12:35:13 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	int	i;
	int	j;
	int	dstlen;

	dstlen = ft_strlen(dest);
	i = dstlen - 1;
	j = 0;
	while (src[j] && i < (dstsize - dstlen - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (ft_strlen(src));
}
