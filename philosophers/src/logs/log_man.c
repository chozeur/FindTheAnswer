/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_man.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:54:00 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/14 16:44:06 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	log_man(int action, int id, t_data *data)
{
	t_msts	ts;

	pthread_mutex_lock(&data->m_life);
	if (data->dead)
		return ;
	pthread_mutex_unlock(&data->m_life);
	ts = get_timestamp_ms() - data->ts_begin;
	pthread_mutex_lock(&data->m_write);
	printf("%s%ld%s %s%d%s ", YEL, ts, NC, BLU, id, NC);
	if (action == L_FORK)
		log_fork();
	else if (action == L_EAT)
		log_eat();
	else if (action == L_SLEEP)
		log_sleep();
	else if (action == L_THINK)
		log_think();
	else if (action == L_DIE)
		log_die();
	pthread_mutex_unlock(&data->m_write);
}
