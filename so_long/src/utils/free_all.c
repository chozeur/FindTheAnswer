/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:42:49 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/15 21:16:58 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	free_all(t_data *data)
{
	int	i;

	if (!data->map)
	{
		mlx_destroy_display(data->mlx_ptr);
		free(data->mlx_ptr);
		return (0);
	}
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
