/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:00:41 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/21 21:12:19 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	is_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static int	index;
	char	*res;
	char	*buff;

	res = ft_strdup("");;
	if (!res)
		return (NULL);
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	index = 0;
	if (fd < 1)
		return (NULL);
	read(fd, buff, BUFFER_SIZE);
	buff[BUFFER_SIZE] = '\0';
	res = ft_strjoin(res, buff);
	if (!is_nl(res))
}
