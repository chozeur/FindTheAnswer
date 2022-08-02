/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:36:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/14 13:32:47 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

static void	*wait_for_life(pthread_t *life);

void	*routine(void *philo)
{
	pthread_t	life;

	pthread_mutex_lock(&((t_philo *)philo)->m_philo);
	pthread_create(&life, NULL, &die, ((t_philo *)philo));
	pthread_mutex_unlock(&((t_philo *)philo)->m_philo);
	while (!is_dead(((t_philo *)philo)->data) \
		&& ((((t_philo *)philo)->lunches \
		< ((t_philo *)philo)->data->args.lunches) \
		|| !((t_philo *)philo)->data->args.lunches))
	{
		if (((t_philo *)philo)->state == S_THINK)
			eat((t_philo *)philo);
		if (is_dead(((t_philo *)philo)->data) || ((((t_philo *)philo)->lunches \
		>= ((t_philo *)philo)->data->args.lunches) \
		&& ((t_philo *)philo)->data->args.lunches))
			return (wait_for_life(&life));
		if (((t_philo *)philo)->state == S_EAT)
			asleep((t_philo *)philo);
		if (is_dead(((t_philo *)philo)->data))
			return (wait_for_life(&life));
		if (((t_philo *)philo)->state == S_SLEEP)
			think((t_philo *)philo);
	}
	return (wait_for_life(&life));
}

static void	*wait_for_life(pthread_t *life)
{
	pthread_join(*life, NULL);
	return (NULL);
}
