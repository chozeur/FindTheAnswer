/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leave.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:26:20 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/17 19:33:46 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static int	free_all(t_data *data);
static int	free_1(t_data *data);
static int	free_2(t_data *data);

int	leave(t_data *data, int status)
{
	if (status == 1)
	{
		free_1(data);
		exit(EXIT_SUCCESS);
	}
	else if (status == 2)
	{
		free_2(data);
		exit(EXIT_SUCCESS);
	}
	else
	{
		free_all(data);
		exit(EXIT_SUCCESS);
	}
	return (0);
}

static int	free_all(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->map_height)
		free(data->map[i++]);
	free(data->map);
	mlx_destroy_image(data->mlx_ptr, data->c_portal.mlx_img);
	mlx_destroy_image(data->mlx_ptr, data->o_portal.mlx_img);
	mlx_destroy_image(data->mlx_ptr, data->hero.mlx_img);
	mlx_destroy_image(data->mlx_ptr, data->col.mlx_img);
	mlx_destroy_image(data->mlx_ptr, data->reaper.mlx_img);
	mlx_destroy_image(data->mlx_ptr, data->tree.mlx_img);
	mlx_destroy_image(data->mlx_ptr, data->ground.mlx_img);
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	return (0);
}

static int	free_1(t_data *data)
{
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	return (0);
}

static int	free_2(t_data *data)
{
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	return (0);
}
