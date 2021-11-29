/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:32:48 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/22 15:07:33 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t	i;

	res = malloc(count * size);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}
