/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:36:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 18:13:34 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	*routine(void *philo)
{
	pthread_t	life;

	pthread_create(&life, NULL, &die, ((t_philo *)philo));
	while (!is_dead(((t_philo *)philo)->data))
	{
		if (((t_philo *)philo)->state == S_THINK)
		{
			eat((t_philo *)philo);
		}
		if (is_dead(((t_philo *)philo)->data))
		{
			pthread_join(life, NULL);
			return (NULL);
		}
		if (((t_philo *)philo)->state == S_EAT)
		{
			asleep((t_philo *)philo);
		}
		if (is_dead(((t_philo *)philo)->data))
		{
			pthread_join(life, NULL);
			return (NULL);
		}
		if (((t_philo *)philo)->state == S_SLEEP)
		{
			think((t_philo *)philo);
		}
	}
	pthread_join(life, NULL);
	return (NULL);
}

