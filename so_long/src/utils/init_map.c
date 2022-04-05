/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:06:19 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/05 04:26:29 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	*error(int code, char *mpath);
static int	isber(char *mpath);
static void	delwhite(char *mpath);
static int	isclean(char **map, int len);

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
	{
		map[i] = get_next_line(fd);
		i++;
	}
	data->map_width = mapcheck(map, data->map_height);
	if (!isclean(map, data->map_height))
		return (error(0, mpath));
	return (map);
}


static int	isber(char *mpath)
{
	int	len;

	delwhite(mpath);
	if (!mpath || mpath[0] == '\0')
		return (1);
	len = ft_strlen(mpath);
	if (mpath[len - 1] == 'r' && mpath[len - 2] == 'e' && mpath[len - 3] == 'b'\
		&& mpath[len - 4] == '.')
		return (1);
	return (0);
}

static void	delwhite(char *mpath)
{
	int	i;

	i = ft_strlen(mpath) - 1;
	while (i > -1)
	{
		if (mpath[i] == ' ')
			mpath[i] = '\0';
		i--;
	}
}

static int	isclean(char **map, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != 'C' && map[i][j] != 'P' && map[i][j] != 'E'\
				&& map[i][j] != '1' && map[i][j] != '0' && map[i][j] != '\n'\
				&& map[i][j] != 'X')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static void	*error(int code, char *mpath)
{
	if (code == 1)
		ft_printf("%sAn error occured while opening [%s]%s\n",RED, mpath, NC);
	else if (code == 2)
		ft_printf("%sAn error occured in a malloc assignment%s\n", RED, NC);
	else if (code == 3)
		ft_printf("%s%s is not a <*.ber> file%s\n", RED, mpath, NC);
	else
		ft_printf("%sProgram error%s\n", RED, NC);
	return (NULL);
}
