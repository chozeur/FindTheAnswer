/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 06:22:22 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/30 16:14:58 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int main(void)
{
	void	*mlx_ptr;
	void	*window;

	mlx_ptr = mlx_init();
	window = mlx_new_window(mlx_ptr, 500, 500, "Hello world");
	(void)window;
	ft_putstr_fd("Hello World !\n", 1);
	while (1)
	return (0);
}
