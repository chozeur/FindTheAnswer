/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maplen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:29:48 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/04 03:48:36 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

// !	There's no open() secure, because it has been first called in init_map()

int	maplen(char *mpath)
{
	char	*line;
	int		res;
	int		fd;

	fd = open(mpath, O_RDONLY);
	line = "";
	res = 0;
	while (line)
	{
		if (res)
			free(line);
		line = get_next_line(fd);
		if (line)
			res++;
	}
	close(fd);
	if (!res)
	{
		ft_printf("%smaplen(%d) returned 0%s", YLW, fd, NC);
		return (0);
	}
	return (res);
}
