/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:36:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 03:38:56 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	*routine(void *philo)
{
	while (1)
	{
		if (((t_philo *)philo)->state == S_THINK)
		{
			eat((t_philo *)philo);
		}
		if (((t_philo *)philo)->state == S_EAT)
		{
			asleep((t_philo *)philo);
		}
		if (((t_philo *)philo)->state == S_SLEEP)
		{
			think((t_philo *)philo);
		}
	}
}
