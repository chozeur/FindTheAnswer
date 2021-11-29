/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:34:53 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/23 13:25:28 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*ptr;

	ptr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ptr = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		ptr = (char *)&s[i];
	return (ptr);
}
