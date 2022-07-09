/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:42:59 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 19:10:42 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	main(int ac, char **av)
{
	t_data	data;
	int		i;

	if (get_args(ac, av, &data))
		exit(EXIT_FAILURE);
	if (init_all(&data))
		return (1);
	launch_it(&data);
	i = 0;
	while (i < data.args.pnum)
		pthread_join(*data.table[i++].th, NULL);
	return (free_philo(&data));
}
