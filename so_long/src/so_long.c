/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 06:22:22 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/15 00:16:01 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static int	error(int code);
static void	count_col(t_data *data);
static void	count_reapers(t_data *data);

int	main(int ac, char **av)
{
	t_data	data;

	(void)ac;
	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
		return (error(MLX_ERROR));
	data.map = init_map(av[1], &data);
	init_img(&data);
	data.win_ptr = mlx_new_window(data.mlx_ptr, data.map_width * 96,\
		data.map_height * 96, "so_long");
	if (!data.win_ptr)
	{
		free(data.mlx_ptr);
		return (MLX_ERROR);
	}
	data.player.moves = 0;
	count_col(&data);
	count_reapers(&data);
	locate_player(&data);
	mlx_loop_hook(data.mlx_ptr, &render_map, &data);
	mlx_hook(data.win_ptr, KeyPress, KeyPressMask, &keypress_handler, &data);
	mlx_hook(data.win_ptr, KeyRelease, KeyReleaseMask, &keyrelease_handler, &data);
	mlx_hook(data.win_ptr, 17, 0, leave, &data);
	mlx_loop(data.mlx_ptr);
	leave(&data);
	return (0);
}

static void	count_col(t_data *data)
{
	int	i;
	int	j;

	data->col.count = 0;
	i = 0;
	while (i < data->map_height)
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == COL)
				data->col.count++;
			j++;
		}
		i++;
	}
}

static void	count_reapers(t_data *data)
{
	int	i;
	int	j;

	data->reaper.count = 0;
	i = 0;
	while (i < data->map_height)
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == REAPER)
				data->reaper.count++;
			j++;
		}
		i++;
	}
}

static int	error(int code)
{
	if (code == MLX_ERROR)
		ft_printf("%sMLX ERROR%s\n", RED, NC);
	return (1);
}
