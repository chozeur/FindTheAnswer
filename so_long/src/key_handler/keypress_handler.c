/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keypress_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:04:58 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/14 22:05:27 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	keypress_handler(int keysym, t_data *data)
{
	if (keysym == XK_w || keysym == XK_W)
		move_up(data);
	if (keysym == XK_d || keysym == XK_D)
		move_right(data);
	if (keysym == XK_s || keysym == XK_S)
		move_down(data);
	if (keysym == XK_a || keysym == XK_A)
		move_left(data);
	return (0);
}
