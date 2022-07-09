/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dead.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 05:44:41 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 06:04:48 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

int	is_dead(t_data *data)
{
	int	dead;

	pthread_mutex_lock(&data->life);
		dead = data->dead;
	pthread_mutex_unlock(&data->life);
	return (dead);
}
