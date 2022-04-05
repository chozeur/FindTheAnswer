/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 02:41:28 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/05 03:46:02 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	move(t_data *data);

void	move_left(t_data *data)
{
	if (data->map[data->player.vect.y][data->player.vect.x - 1] == WALL)
		return ;
	else if (data->map[data->player.vect.y][data->player.vect.x - 1] == EXIT)
	{
		if (data->col.count)
			return ;
		else
			exit(EXIT_SUCCESS);
	}
	else
		move(data);
}

static void	move(t_data *data)
{
	if (data->map[data->player.vect.y][data->player.vect.x - 1] == COL)
		(data->col.count)--;
	data->map[data->player.vect.y][data->player.vect.x] = FLOOR;
	data->map[data->player.vect.y][data->player.vect.x - 1] = START;
	(data->player.vect.x)--;
	(data->player.moves)++;
}
