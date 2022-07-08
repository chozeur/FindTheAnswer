/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_philo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 03:40:15 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/08 19:31:47 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

int	free_philo(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->args.pnum)
		free(data->table[i++].th);
	i = 0;
	// while (i < data->args.pnum)
	// 	free(data->forks[i++]);
	free(data->table);
	return (0);
}
