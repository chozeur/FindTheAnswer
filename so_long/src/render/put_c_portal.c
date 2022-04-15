/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_c_portal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:47:12 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/15 21:12:47 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	put_c_portal(t_data *data, t_vector *vect)
{
	return (mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->c_portal.mlx_img, vect->x, vect->y));
}
