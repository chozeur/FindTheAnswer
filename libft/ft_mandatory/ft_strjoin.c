/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:16:39 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/25 20:12:05 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = malloc(sizeof(char) * (s1len + s2len + 1));
	if (res == NULL)
		return (NULL);
	res = "";
	ft_strlcat(res, s1, s1len + s2len + 1);
	ft_strlcat(res, s2, s1len + s2len + 1);
	return (res);
}

///////////////////////////////////////

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		return (-1);
	printf("s1 = %s\ts2 = %s\tjoin = %s\n", av[1], av[2], ft_strjoin(av[1], av[2]));
	return (0);
}
