/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:32:48 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/07 18:29:32 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;

	res = (unsigned char *)malloc(size * count);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
