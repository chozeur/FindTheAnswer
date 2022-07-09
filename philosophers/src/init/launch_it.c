/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_it.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:17:35 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 04:27:41 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	launch_it(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->args.pnum)
	{
		pthread_create(data->table[i].th, NULL, &routine, &data->table[i]);
		usleep(42);
		i++;
	}
}