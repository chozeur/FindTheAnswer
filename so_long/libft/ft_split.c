/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:54:30 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/07 18:30:33 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*strdup_custom(char const *s, char c)
{
	char	*res;
	int		j;

	res = malloc(sizeof(char) * (word_len(s, c) + 1));
	if (res == NULL)
		return (NULL);
	j = 0;
	while (s[j] && s[j] != c)
	{
		res[j] = s[j];
		j++;
	}
	res[j] = '\0';
	return (res);
}

static void	free_all(char **res)
{
	int		i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static void	split_supply(char **res, char const *s, char c, int wds)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < wds)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			res[j] = strdup_custom(&s[i], c);
			if (res[j] == NULL)
			{
				free_all(res);
				return ;
			}
			i += word_len(&s[i], c);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	res[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		wds;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	wds = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			wds++;
		while (s[i] && s[i] != c)
			i++;
	}
	res = malloc(sizeof(char *) * (wds + 1));
	if (res == NULL)
		return (NULL);
	split_supply(res, s, c, wds);
	return (res);
}
