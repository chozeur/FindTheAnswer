/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:09:41 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/24 19:44:07 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	count_words(char *str, char set)
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

char	*strdup_custom(char *str, char set, int *i)
{
	char	*res;
	int	j;

	j = 0;
	while (str[i] != set)
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
