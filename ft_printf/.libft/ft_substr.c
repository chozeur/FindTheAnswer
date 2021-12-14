/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:54:42 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/07 18:30:51 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char const *s, size_t max)
{
	size_t	res;

	res = 0;
	while (s[res] && res < max)
		res++;
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		res = ft_strdup("\0");
		return (res);
	}
	res = malloc(sizeof(char) * (ft_strnlen(s, len) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[(unsigned int)i + start])
	{
		res[i] = s[start + (unsigned int)i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
