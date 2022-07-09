/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 04:41:31 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 18:32:29 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	*die(void *philo)
{
	t_msts	ts;

	ts = get_timestamp_ms();
	while (get_timestamp_ms() - ts < ((t_philo *)philo)->data->args.tt_die)
	{
		if (((t_philo *)philo)->prev_lunch)
			ts = ((t_philo *)philo)->prev_lunch;
		continue ;
	}
	if (((t_philo *)philo)->lunches >= ((t_philo *)philo)->data->args.lunches)
		return (NULL);
	pthread_mutex_lock(&((t_philo *)philo)->data->life);
	if (!((t_philo *)philo)->data->dead)
		log_man(L_DIE, ((t_philo *)philo)->id, ((t_philo *)philo)->data);
	((t_philo *)philo)->data->dead = 1;
	pthread_mutex_unlock(&((t_philo *)philo)->data->life);
	return (NULL);
}
