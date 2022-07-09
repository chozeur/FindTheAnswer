/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stop_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:19:00 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 18:13:59 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

int	stop_it(t_msts wait, t_philo *philo, int forks)
{
	t_msts	ts;

	ts = get_timestamp_ms();
	while (get_timestamp_ms() - ts < wait)
	{
		if (is_dead(philo->data))
		{
			if (forks >= 1)
				pthread_mutex_unlock(philo->left_fork);
			else if (forks == 2)
				pthread_mutex_unlock(philo->right_fork);
			return (1);
		}
		continue ;
	}
	return (0);
}
