/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:06:49 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 17:13:40 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	asleep(t_philo *philo)
{
	philo->state = S_SLEEP;
	log_man(L_SLEEP, philo->id, philo->data);
	stop_it(philo, 0);
}
