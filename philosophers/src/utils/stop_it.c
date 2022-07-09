/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stop_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:19:00 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 03:35:43 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	stop_it(long tms)
{
	t_msts	ts;
	t_msts	i;

	ts = get_timestamp_ms();
	i = get_timestamp_ms();
	while (i - ts < tms)
	{
		i = get_timestamp_ms();
		// printf("tms = %ld\tts = %ld\ti = %ld\n", tms, ts, i);
		continue ;
	}
}
