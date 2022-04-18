/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isclean.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:56:00 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/18 18:06:30 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	isclean(char **map, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != 'C' && map[i][j] != 'P' && map[i][j] != 'E'\
				&& map[i][j] != '1' && map[i][j] != '0' && map[i][j] != '\n'\
				&& map[i][j] != 'X')
			{
				ft_printf("%sInvalid symbol(s) on the map%s\n", YLW, NC);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
