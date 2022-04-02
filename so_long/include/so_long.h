/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 06:20:28 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/02 02:43:55 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <X11/keysym.h>
// # include <mlx.h>
# include "../minilibx-linux/mlx.h"
# include "../Lib42/include/lib42.h"

# define MLX_ERROR 1
# define RED_PIXEL 0xFF0000

typedef struct s_data{
	void	*mlx_ptr;
	void	*win_ptr;
}	t_data;

#endif
