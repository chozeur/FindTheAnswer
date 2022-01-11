/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:00:41 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/11 20:11:24 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read(int fd, char *stat)
{
	char	*buff;
	int		len;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	len = 1;
	while (is_nl(stat) == 0 && len != 0)
	{
		len = read(fd, buff, BUFFER_SIZE);
		if (len == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[len] = '\0';
		stat = ft_strjoin(stat, buff);
	}
	free(buff);
	return (stat);
}

char	*parse_line(char *str)
{
	char	*res;
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (NULL);
	while (str[i++])
		if (str[i++] == '\n')
			break ;
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (str[++i])
	{
		if (str[i] == '\n')
		{
			res[i] = str[i];
			i++;
			break ;
		}
		res[i] = str[i];
	}
	res[i] = '\0';
	return (res);
}

char	*clear_stat(char *stat)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (stat[i] && stat[i] != '\n')
		i++;
	if (stat[i] == '\0')
	{
		free(stat);
		return (NULL);
	}
	res = malloc(sizeof(char) * ft_strlen(stat) - i + 1);
	if (!res)
		return (NULL);
	i++;
	while (stat[i])
		res[j++] = stat[i++];
	res[j] = '\0';
	free(stat);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	**stat;
	char		*res;

	stat = malloc(sizeof(char *) * 1024);
	if (!stat)
		return (NULL);
	if (fd < 0 || fd > 1023 || BUFFER_SIZE <= 0)
		return (NULL);
	stat[fd] = ft_read(fd, stat[fd]);
	if (!stat[fd])
		return (NULL);
	res = parse_line(stat[fd]);
	stat[fd] = clear_stat(stat[fd]);
	return (res);
}
