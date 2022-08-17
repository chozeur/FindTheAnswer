/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:43:09 by flcarval          #+#    #+#             */
/*   Updated: 2022/08/17 15:08:58 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

static void	lock_forks(t_philo *philo);

void	eat(t_philo *philo)
{
	lock_forks(philo);
	((t_philo *)philo)->state = S_EAT;
	log_man(L_EAT, philo->id, philo->data);
	pthread_mutex_lock(&philo->m_prev_lunch);
	philo->prev_lunch = get_timestamp_ms();
	pthread_mutex_unlock(&philo->m_prev_lunch);
	stop_it(philo->data->args.tt_eat, philo, 2);
	pthread_mutex_unlock(philo->right_fork);
	pthread_mutex_unlock(philo->left_fork);
	pthread_mutex_lock(&philo->m_philo);
	philo->lunches++;
	pthread_mutex_unlock(&philo->m_philo);
}

static void	lock_forks(t_philo *philo)
{
	if (philo->id % 2)
		pthread_mutex_lock(philo->right_fork);
	else
		pthread_mutex_lock(philo->left_fork);
	log_man(L_FORK, philo->id, philo->data);
	if (philo->data->args.pnum == 1)
	{
		stop_it(philo->data->args.tt_die + 5, philo, 1);
		return ;
	}
	if (philo->id % 2)
		pthread_mutex_lock(philo->left_fork);
	else
		pthread_mutex_lock(philo->right_fork);
	log_man(L_FORK, philo->id, philo->data);
}
