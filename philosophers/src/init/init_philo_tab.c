/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philo_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:35:50 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/08 17:21:58 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

t_philo	*init_philo_tab(int pnum)
{
	t_philo	*tab;
	int		i;
	int		n;

	tab = malloc(sizeof(t_philo) * pnum);
	if (!tab)
		exit(EXIT_FAILURE);
	i = 0;
	n = 1;
	while (i < pnum)
	{
		tab[i].prev_lunch = 0;
		tab[i].lunches = 0;
		tab[i].state = NONE;
		tab[i].num = n++;
		tab[i].fork = malloc(sizeof(pthread_mutex_t));
		pthread_mutex_init(tab[i].fork, NULL);
		tab[i].th = malloc(sizeof(pthread_t));
		i++;
	}
	return (tab);
}
