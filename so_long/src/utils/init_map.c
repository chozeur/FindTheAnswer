/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:06:19 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/18 18:06:17 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	*error(int code, char *mpath);
static void	check_width_clean(char **map, t_data *data);
//	In init_map(), the loop goes up to <= len so that res[len] = NULL

char	**init_map(char *mpath, t_data *data)
{
	int		fd;
	char	**map;
	int		i;

	if (!isber(mpath))
		return (error(3, mpath));
	fd = open(mpath, O_RDONLY);
	if (fd == -1)
		return (error(1, mpath));
	data->map_height = maplen(mpath);
	if (!data->map_height)
		return (error(0, mpath));
	map = malloc(sizeof(char *) * (data->map_height + 1));
	if (!map)
		return (error(2, mpath));
	i = 0;
	while (i <= data->map_height)
		map[i++] = get_next_line(fd);
	data->map_width = mapcheck(map, data->map_height);
	check_width_clean(map, data);
	return (map);
}

static void	check_width_clean(char **map, t_data *data)
{
	int	i;

	if (!data->map_width || !isclean(map, data->map_height))
	{
		i = 0;
		while (map[i])
			free(map[i++]);
		free(map);
		leave(data, 2);
	}
}

static void	*error(int code, char *mpath)
{
	if (code == 1)
		ft_printf("%sAn error occured while opening [%s]%s\n", RED, mpath, NC);
	else if (code == 2)
		ft_printf("%sAn error occured in a malloc assignment%s\n", RED, NC);
	else if (code == 3)
		ft_printf("%s%s is not a <*.ber> file%s\n", RED, mpath, NC);
	else
		ft_printf("%sProgram error%s\n", RED, NC);
	return (NULL);
}
