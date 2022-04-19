/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 06:20:28 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/19 14:12:28 by flcarval         ###   ########.fr       */
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

/* Errors */
# define MLX_ERROR 1

/* ft_printf colors */
# define RED "\e[0;31m"
# define GREEN "\e[0;32m"
# define BLUE "\e[0;34m"
# define CYAN "\e[0;36m"
# define YLW "\e[0;33m"
# define BLACK "\e[0;30m"
# define NC "\e[0m"

/* ft_printf background colors */
# define B_BLUE "\e[44m"
# define B_YLW "\e[43m"
# define B_WHITE "\e[47m"

/* Elements */
# define FLOOR '0'
# define WALL '1'
# define COL 'C'
# define REAPER 'X'
# define EXIT 'E'
# define START 'P'

typedef struct s_vector{
	int	x;
	int	y;
}	t_vector;

typedef struct s_player{
	t_vector	vect;
	int			moves;
}	t_player;

typedef struct s_img{
	void	*mlx_img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
	int		count;
}	t_img;

typedef struct s_data{
	void		*mlx_ptr;
	void		*win_ptr;
	char		**map;
	int			map_height;
	int			map_width;
	int			img_size;
	t_img		c_portal;
	t_img		o_portal;
	t_img		hero;
	t_img		col;
	t_img		reaper;
	t_img		tree;
	t_img		ground;
	t_player	player;
}	t_data;

/* key_handler */
int		keypress_handler(int keysym, t_data *data);
int		keyrelease_handler(int keysym, t_data *data);

/* render */

int		render_map(t_data *data);
int		init_img(t_data *data);
int		put_c_portal(t_data *data, t_vector *vect);
int		put_o_portal(t_data *data, t_vector *vect);
int		put_col(t_data *data, t_vector *vect);
int		put_ground(t_data *data, t_vector *vect);
int		put_reaper(t_data *data, t_vector *vect);
int		put_hero(t_data *data, t_vector *vect);
int		put_tree(t_data *data, t_vector *vect);

/* utils */
char	**init_map(char *mpath, t_data *data);
int		maplen(char *mpath);
int		mapcheck(char **map, int len);
void	locate_player(t_data *data);
int		leave(t_data *data, int status);
int		isber(char *mpath);
int		isclean(char **map, int len);

/* moves */
void	move_up(t_data *data);
void	move_right(t_data *data);
void	move_down(t_data *data);
void	move_left(t_data *data);

#endif
