/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 06:20:28 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/02 05:03:48 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <X11/keysym.h>
# include <X11/X.h>
// # include <mlx.h>
# include "../minilibx-linux/mlx.h"
# include "../Lib42/include/lib42.h"

# define MLX_ERROR 1
# define WINDOW_HEIGHT 540
# define WINDOW_WIDTH 960
# define RED_PIXEL 0xFF0000
# define GREEN_PIXEL 0x00FF00
# define WHITE_PIXEL 0xFFFFFF

typedef struct s_img{
	void	*mlx_img;
	char	*addr;
	int		bpp; // ? bits per pixel
	int		line_len;
	int		endian;
}	t_img;

typedef struct s_data{
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	*img;

}	t_data;

typedef struct s_rect{
	/*	x & y are upper left coordinates of rect */
	int	x;
	int	y;
	int	width;
	int	height;
	int	color;
}	t_rect;

int	keypress_handler(int keysym, t_data *data);
int	handle_no_event(void *data);
int	keyrelease_handler(int keysym, t_data *data);
int	render(t_data *data);
int	render_rect(t_data *data, t_rect rect);
void	render_background(t_data *data, int color);
int	render_xpm(t_data *data);

#endif
