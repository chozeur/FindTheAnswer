/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:18:17 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 06:12:43 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

int	init_all(t_data *data)
{
	data->ts_begin = get_timestamp_ms();
	data->dead = 0;
	pthread_mutex_init(&data->write, NULL);
	pthread_mutex_init(&data->life, NULL);
	data->forks = init_forks(data->args.pnum);
	data->table = init_philo_tab(data->args.pnum, data);
	if (!data->table || !data->forks)
		return (1);
	return (0);
}
