/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_man.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:54:00 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 00:20:32 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	log_man(int action, int id)
{
	t_msts	ts;

	ts = get_timestamp_ms();
	printf("%s%ld%s %s%d%s ",YEL, ts, NC, BLU, id, NC);
	if (action == L_FORK)
		log_fork();
	else if (action == L_EAT)
		log_eat();
	else if (action == L_SLEEP)
		log_sleep();
	else if (action == L_THINK)
		log_think();
	else if (action == L_DIE)
		log_die();
}
