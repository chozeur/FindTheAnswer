/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keypress_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:04:58 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/04 23:51:39 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	keypress_handler(int keysym, t_data *data)
{
	ft_printf("Key Pressed : %d\n", keysym);
	(void)data;
	// * Add WASD handlers here

	return (0);
}
