/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:54:42 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/25 20:05:44 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * (len + 1));
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

/////////////////////////////////////////////////

#include <stdio.h>

int	main()
{
	char	str[256] = "test de ft_substr doit afficher : ft_substr";
	unsigned int	start = 8;
	size_t	len = 9;
	
	printf("str = %s\tstart = %d\tlen = %ld\tsub = %s\n", str, start, len, ft_substr(str, start, len));
	return (0);
}
