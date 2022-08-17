/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_man.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:54:00 by flcarval          #+#    #+#             */
/*   Updated: 2022/08/17 15:14:50 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

static void	log_man_supply(int action);

void	log_man(int action, int id, t_data *data)
{
	t_msts	ts;

	pthread_mutex_lock(&data->m_dead);
	if (data->dead)
		return ;
	ts = get_timestamp_ms() - data->ts_begin;
	if (action == L_DIE)
	{
		printf("%s%ld%s %s%d%s ", YEL, ts, NC, BLU, id, NC);
		log_die();
		data->dead++;
		pthread_mutex_unlock(&data->m_dead);
		return ;
	}
	pthread_mutex_unlock(&data->m_dead);
	pthread_mutex_lock(&data->m_write);
	printf("%s%ld%s %s%d%s ", YEL, ts, NC, BLU, id, NC);
	log_man_supply(action);
	pthread_mutex_unlock(&data->m_write);
}

static void	log_man_supply(int action)
{
	if (action == L_FORK)
		log_fork();
	else if (action == L_EAT)
		log_eat();
	else if (action == L_SLEEP)
		log_sleep();
	else if (action == L_THINK)
		log_think();
}
