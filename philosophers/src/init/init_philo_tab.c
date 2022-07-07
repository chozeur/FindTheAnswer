/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philo_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:35:50 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/07 17:27:58 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

t_philo	*init_philo_tab(int pnum)
{
	t_philo	*tab;
	int		i;

	tab = malloc(sizeof(t_philo) * pnum);
	if (!tab)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < pnum)
	{
		tab[i].prev_lunch = 0;
		tab[i].lunches = 0;
		tab[i].state = NONE;
		i++;
	}
	return (tab);
}
