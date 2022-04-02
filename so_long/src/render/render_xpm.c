/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_xpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:35:39 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/02 05:04:42 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	render_xpm(t_data *data)
{
	int h = 48;
	int w = 48;

	data->img->mlx_img = mlx_xpm_file_to_image(data->mlx_ptr, "../../sprites/1.xpm", &h, &w);
	if (!data->img->mlx_img)
		return (1);
	data->img->addr = mlx_get_data_addr(data->mlx_ptr, &data->img->bpp, &data->img->line_len, &data->img->endian);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img->mlx_img, 100, 100);
	return (0);
}
