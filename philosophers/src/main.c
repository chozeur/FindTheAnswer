/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:42:59 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/08 23:23:03 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

static int test(t_philo *tab, int n, t_args args, t_data *data);

int	main(int ac, char **av)
{
	t_data	data;

	if (get_args(ac, av, &data))
		exit(EXIT_FAILURE);
	if (init_all(&data))
		return (1);
	test(data.table, data.args.pnum, data.args, &data);
	return (free_philo(&data));
}



// TEST DE LA RECUP DES ARG ET DE L'INIT DE LA TABLE ET DES FOURCHETTES
//
static int test(t_philo *tab, int n, t_args args, t_data *data)
{
	int i = 0;

	printf("%spnum = %d\ttt_die = %d\ttt_eat = %d\ttt_sleep = %d\tlunches = %d%s\n", \
		BLU, args.pnum, args.tt_die, args.tt_eat, args.tt_sleep, args.lunches, NC);
	i = 0;
	while (i < n)
	{
		printf("philo n°%d\tprev = %ld\tlun = %d\tstate = %d\tleft_fork = %p\tright_fork = %p\n", \
			tab[i].num, tab[i].prev_lunch, tab[i].lunches, tab[i].state, &data->forks[tab[i].left_fork], &data->forks[tab[i].right_fork]);
		i++;
	}
	return (0);
}

