/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_reaper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:20:06 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/15 21:12:56 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	put_reaper(t_data *data, t_vector *vect)
{
	return (mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->reaper.mlx_img, vect->x, vect->y));
}
