/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:17:03 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/20 16:03:50 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	init_1(t_data *data);
static void	init_2(t_data *data);
static int	check_2(t_data *data);
static int	check_1(t_data *data);

int	init_img(t_data *data)
{
	init_1(data);
	if (!check_1(data))
	{
		ft_printf("%s[init_img] error in xpm initialyze%s\n", RED, NC);
		leave(data, 1);
		return (1);
	}
	init_2(data);
	if (!check_2(data))
	{
		ft_printf("%s[init_img] error in xpm initialyze%s\n", RED, NC);
		leave(data, 1);
		return (1);
	}
	return (0);
}

static void	init_1(t_data *data)
{
	data->img_size = 96;
	data->c_portal.mlx_img = mlx_xpm_file_to_image(data->mlx_ptr, \
		"./sprites/closed_portal.xpm", &data->img_size, &data->img_size);
	data->o_portal.mlx_img = mlx_xpm_file_to_image(data->mlx_ptr, \
		"./sprites/opened_portal.xpm", &data->img_size, &data->img_size);
	data->col.mlx_img = mlx_xpm_file_to_image(data->mlx_ptr, \
		"./sprites/col.xpm", &data->img_size, &data->img_size);
	data->ground.mlx_img = mlx_xpm_file_to_image(data->mlx_ptr, \
		"./sprites/grass.xpm", &data->img_size, &data->img_size);
	data->hero.mlx_img = mlx_xpm_file_to_image(data->mlx_ptr, \
		"./sprites/hero.xpm", &data->img_size, &data->img_size);
	data->reaper.mlx_img = mlx_xpm_file_to_image(data->mlx_ptr, \
		"./sprites/reaper.xpm", &data->img_size, &data->img_size);
	data->tree.mlx_img = mlx_xpm_file_to_image(data->mlx_ptr, \
		"./sprites/tree.xpm", &data->img_size, &data->img_size);
}

static void	init_2(t_data *data)
{
	data->c_portal.addr = mlx_get_data_addr(data->c_portal.mlx_img, \
		&(data->c_portal.bpp), &(data->c_portal.line_len), \
		&(data->c_portal.endian));
	data->o_portal.addr = mlx_get_data_addr(data->o_portal.mlx_img, \
		&(data->o_portal.bpp), &(data->o_portal.line_len), \
		&(data->o_portal.endian));
	data->col.addr = mlx_get_data_addr(data->col.mlx_img, &(data->col.bpp), \
		&(data->col.line_len), &(data->col.endian));
	data->ground.addr = mlx_get_data_addr(data->ground.mlx_img, \
		&(data->ground.bpp), &(data->ground.line_len), &(data->ground.endian));
	data->hero.addr = mlx_get_data_addr(data->hero.mlx_img, &(data->hero.bpp), \
		&(data->hero.line_len), &(data->hero.endian));
	data->reaper.addr = mlx_get_data_addr(data->reaper.mlx_img, \
		&(data->reaper.bpp), &(data->reaper.line_len), &(data->reaper.endian));
	data->tree.addr = mlx_get_data_addr(data->tree.mlx_img, &(data->tree.bpp), \
		&(data->tree.line_len), &(data->tree.endian));
}

static int	check_1(t_data *data)
{
	if (!data->c_portal.mlx_img || !data->o_portal.mlx_img || \
		!data->col.mlx_img || !data->ground.mlx_img || !data->hero.mlx_img \
		|| !data->reaper.mlx_img || !data->tree.mlx_img)
		return (0);
	return (1);
}

static int	check_2(t_data *data)
{
	if (!data->c_portal.addr || !data->o_portal.addr || \
		!data->col.addr || !data->ground.addr || !data->hero.addr \
		|| !data->reaper.addr || !data->tree.addr)
		return (0);
	return (1);
}
