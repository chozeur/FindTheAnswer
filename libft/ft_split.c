/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:09:41 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/02 18:49:26 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *str, char set)
{
	int		i;
	int		count;

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

static	char	*strdup_custom(char const *str, char set, int *i)
{
	char	*res;
	int		j;

	j = 0;
	while (str[j] != set)
		j++;
	res = malloc(sizeof(char) * (j + 1));
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

static	void	c_supply(char const *s, int *i, char c)
{
	while (s[*i] == c)
		(*i)++;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		wds;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	wds = count_words(s, c);
	res = malloc(sizeof(char *) * (wds + 1));
	if (res == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (j < wds)
	{
		c_supply(s, &i, c);
		if (s[i] != c)
		{
			res[j] = strdup_custom(&s[i], c, &i);
			j++;
		}
		c_supply(s, &i, c);
	}
	res[j] = NULL;
	return (res);
}
