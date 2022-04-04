/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:20:31 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/04 23:20:53 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	put_tree(t_data *data, t_vector *vect)
{
	return (mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,\
		data->tree.mlx_img, vect->x, vect->y));
}
