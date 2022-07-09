/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stop_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:19:00 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 06:03:40 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	stop_it(long tms, t_data *data)
{
	t_msts	ts;

	ts = get_timestamp_ms();
	while (get_timestamp_ms() - ts < tms)
	{
		if (is_dead(data))
			return ;
		continue ;
	}
}
