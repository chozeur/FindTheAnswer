/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_it.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:17:35 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/11 19:02:50 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	launch_it(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->args.pnum)
	{
		pthread_mutex_lock(&data->m_data);
		pthread_create(data->table[i].th, NULL, &routine, &data->table[i]);
		pthread_mutex_unlock(&data->m_data);
		usleep(42);
		i++;
	}
}
