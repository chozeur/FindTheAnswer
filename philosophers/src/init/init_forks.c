/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_forks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:51:27 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/08 19:01:57 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

pthread_mutex_t	*init_forks(int pnum)
{
	pthread_mutex_t	*forks;
	int				i;

	forks = malloc(sizeof(pthread_mutex_t) * pnum);
	if (!forks)
		return (NULL);
	i = 0;
	while (i < pnum)
		pthread_mutex_init(&forks[i++], NULL);
	return (forks);
}
