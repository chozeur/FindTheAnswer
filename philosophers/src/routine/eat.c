/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:43:09 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 17:33:37 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	eat(t_philo *philo)
{
	pthread_mutex_lock(philo->left_fork);
	log_man(L_FORK, philo->id, philo->data);
	// if (stop_it(1, philo, 1))
	// 	return ;
	pthread_mutex_lock(philo->right_fork);
	// if (stop_it(1, philo, 2))
	// 	return ;
	log_man(L_FORK, philo->id, philo->data);
	((t_philo *)philo)->state = S_EAT;
	log_man(L_EAT, philo->id, philo->data);
	philo->prev_lunch = get_timestamp_ms();
	stop_it(philo->data->args.tt_eat, philo, 2);
	// if (stop_it(philo->data->args.tt_eat, philo, 2))
	// 	return ;
	pthread_mutex_unlock(philo->right_fork);
	pthread_mutex_unlock(philo->left_fork);
}
