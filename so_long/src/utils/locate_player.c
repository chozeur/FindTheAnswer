/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   locate_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 02:19:41 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/05 03:06:29 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	locate_player(t_data *data)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < data->map_height)
	{
		x = 0;
		while (data->map[y][x])
		{
			if (data->map[y][x] == START)
			{
				data->player.vect.x = x;
				data->player.vect.y = y;
				return ;
			}
			x++;
		}
		y++;
	}
	ft_printf("%s[locate_player] Player couldn't be found%s\n", YLW, NC);
}
