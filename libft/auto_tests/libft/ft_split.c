/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:09:41 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/29 18:44:30 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	count_words(char const *str, char set)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == set)
			i++;
		if (str[i] && str[i] != set)
			count++;
		while (str[i] && str[i] != set)
			i++;
	}
	return (count);
}

char	*strdup_custom(char const *str, char set, int *i)
{
	char	*res;
	int	j;

	j = 0;
	while (str[j] != set)
		j++;
	res = malloc(sizeof(char) * (j +1));
	if (res == NULL)
		return (NULL);
	j = 0;
	while (str[j] != set)
	{
		res[j] = str[j];
		j++;
		(*i)++;
	}
	res[j] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	wds;
	int	i;
	int	j;

	wds = count_words(s, c);
	res = malloc(sizeof(char *) * (wds + 1));
	if (res == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (j < wds)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			res[j] = strdup_custom(&s[i], c, &i);
			j++;
		}
		while (s[i] == c)
			i++;
	}
	res[j] = NULL;
	return (res);
}

/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	char	**split;

	if (ac != 3)
		return (-1);
	printf("str = %s\tcharset = %c\n", av[1], av[2][0]);
	split = ft_split(av[1], av[2][0]);
	i = 0;
	while (split[i])
	{
		printf("split[%d] = %s\n", i, split[i]);
		i++;
	}
	return (0);
}
*/
