/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:19:32 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/04 23:19:44 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	put_hero(t_data *data, t_vector *vect)
{
	return (mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,\
		data->hero.mlx_img, vect->x, vect->y));
}
