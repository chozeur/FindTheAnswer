/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:42:59 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 02:25:30 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

// static int test(t_data *data);

int	main(int ac, char **av)
{
	t_data	data;

	if (get_args(ac, av, &data))
		exit(EXIT_FAILURE);
	if (init_all(&data))
		return (1);
	launch_it(&data);
	return (free_philo(&data));
}



// TEST DE LA RECUP DES ARG ET DE L'INIT DE LA TABLE ET DES FOURCHETTES
//
// static int test(t_data *data)
// {
// 	int i = 0;

// 	printf("%spnum = %d\ttt_die = %d\ttt_eat = %d\ttt_sleep = %d\tlunches = %d%s\n", \
// 		BLU, data->args.pnum, data->args.tt_die, data->args.tt_eat, data->args.tt_sleep, data->args.lunches, NC);
// 	i = 0;
// 	while (i < data->args.pnum)
// 	{
// 		printf("philo n°%d\tprev = %ld\tlun = %d\tstate = %d\tleft_fork = %p\tright_fork = %p\n", \
// 			data->table[i].id, data->table[i].prev_lunch, data->table[i].lunches, data->table[i].state, data->table[i].left_fork, data->table[i].right_fork);
// 		i++;
// 	}
// 	return (0);
// }

// TEST DES LOGS (DECLANCHE MANUELLE)
//
// static int test(t_data *data)
// {
// 	int i = 100;
// 	while (i < L_DIE)
// 	{
// 		log_man(i += 100, data->table[1].id, data);
// 		usleep(1 * SEC);
// 	}
// 	return (0);
// }
