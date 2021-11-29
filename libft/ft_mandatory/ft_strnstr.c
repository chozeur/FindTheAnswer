/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:35:50 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/24 15:33:11 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	ptr = NULL;
	i = 0;
	if (!little[i])
		ft_strlcpy(ptr, big, ft_strlen(big));
	while (big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && j < len)
			{
				if (big[i + j] != little[j])
					break ;
				j++;
			}
			if (j == len)
				ptr = (char *)&big[i];
		}
		i++;
	}
	return (ptr);
}
