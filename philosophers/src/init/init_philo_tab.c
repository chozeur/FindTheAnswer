/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philo_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:35:50 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/14 13:29:06 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

static int	init(t_philo *tab, t_data *data, int n);

t_philo	*init_philo_tab(int pnum, t_data *data)
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
		if (init(&tab[i++], data, n++))
			return (NULL);
	}
	return (tab);
}

static int	init(t_philo *tab, t_data *data, int n)
{
	tab->prev_lunch = 0;
	tab->lunches = 0;
	pthread_mutex_init(&tab->m_prev_lunch, NULL);
	pthread_mutex_init(&tab->m_philo, NULL);
	tab->state = S_THINK;
	tab->id = n;
	tab->left_fork = &data->forks[n - 1];
	tab->right_fork = &data->forks[n % data->args.pnum];
	tab->th = malloc(sizeof(pthread_t));
	if (!tab->th)
		return (1);
	tab->data = data;
	return (0);
}
