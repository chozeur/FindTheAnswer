/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_timestamp_ms.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:31:05 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/07 12:50:22 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

t_msts	get_timestamp_ms(void)
{
	t_msts			ts;
	struct timeval	t;

	gettimeofday(&t, NULL);
	ts = ((t.tv_sec * 1000000) + t.tv_usec) / 1000;
	return (ts);
}
