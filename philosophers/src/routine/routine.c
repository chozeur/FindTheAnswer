/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:36:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 19:12:56 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	*routine(void *philo)
{
	pthread_t	life;

	pthread_create(&life, NULL, &die, ((t_philo *)philo));
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
		{
			pthread_join(life, NULL);
			return (NULL);
		}
		if (((t_philo *)philo)->state == S_EAT)
			asleep((t_philo *)philo);
		if (is_dead(((t_philo *)philo)->data))
		{
			pthread_join(life, NULL);
			return (NULL);
		}
		if (((t_philo *)philo)->state == S_SLEEP)
			think((t_philo *)philo);
	}
	pthread_join(life, NULL);
	return (NULL);
}
