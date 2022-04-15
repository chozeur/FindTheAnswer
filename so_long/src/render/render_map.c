/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:48:28 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/15 21:13:24 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static int	error(int code);
static int	render_line(char *line, t_data *data, t_vector *vector);
static void	put_portal(t_data *data, t_vector *vect);

int	render_map(t_data *data)
{
	t_vector	vect;
	int			i;

	if (!data->win_ptr)
		return (error(100));
	if (!data->map)
		return (error(200));
	vect.x = 0;
	vect.y = 0;
	i = 0;
	while (i < data->map_height)
	{
		if (render_line(data->map[i], data, &vect))
			return (error(vect.x));
		vect.x = 0;
		(vect.y) += 96;
		i++;
	}
	return (0);
}

static int	render_line(char *line, t_data *data, t_vector *vect)
{
	int	i;

	i = 0;
	while (line[i] && line[i] != '\n')
	{
		if (line[i] == FLOOR)
			put_ground(data, vect);
		else if (line[i] == WALL)
			put_tree(data, vect);
		else if (line[i] == COL)
			put_col(data, vect);
		else if (line[i] == EXIT)
			put_portal(data, vect);
		else if (line[i] == START)
			put_hero(data, vect);
		else
			return (1);
		i++;
		(vect->x) += 96;
	}
	return (0);
}

static void	put_portal(t_data *data, t_vector *vect)
{
	if (!(data->col.count))
		put_o_portal(data, vect);
	else
		put_c_portal(data, vect);
}

static int	error(int code)
{
	if (code == 100)
		ft_printf("%s[render_map] Window is closed%s\n", YLW, NC);
	else if (code == 200)
		ft_printf("%s[render_map] Error in map read%s\n", YLW, NC);
	else
		ft_printf("%s[render_line] Error at line[%d]%s\n", YLW, code, NC);
	return (1);
}
