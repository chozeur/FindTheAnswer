/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_o_portal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:19:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/15 21:12:54 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	put_o_portal(t_data *data, t_vector *vect)
{
	return (mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, \
		data->o_portal.mlx_img, vect->x, vect->y));
}
