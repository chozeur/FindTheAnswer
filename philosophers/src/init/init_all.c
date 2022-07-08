/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:18:17 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/08 19:22:05 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

int	init_all(t_data *data)
{
	data->table = init_philo_tab(data->args.pnum, data);
	data->forks = init_forks(data->args.pnum);
	if (!data->table || !data->forks)
		return (1);
	return (0);
}
