/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 02:36:07 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/15 22:12:54 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	move(t_data *data);

void	move_right(t_data *data)
{
	if (data->map[data->player.vect.y][data->player.vect.x + 1] == WALL)
		return ;
	else if (data->map[data->player.vect.y][data->player.vect.x + 1] == EXIT)
	{
		if (data->col.count)
			return ;
		else
			leave(data, 0);
	}
	else
		move(data);
}

static void	move(t_data *data)
{
	if (data->map[data->player.vect.y][data->player.vect.x + 1] == COL)
		(data->col.count)--;
	data->map[data->player.vect.y][data->player.vect.x] = FLOOR;
	data->map[data->player.vect.y][data->player.vect.x + 1] = START;
	(data->player.vect.x)++;
	(data->player.moves)++;
	ft_printf("%s%s Moves || %d  %s\n", BLACK, B_WHITE, data->player.moves, NC);
}
