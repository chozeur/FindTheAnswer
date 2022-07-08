/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:42:59 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/08 17:24:16 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

static int test(t_philo *tab, int n, t_args args);

int	main(int ac, char **av)
{
	t_data	data;

	if (get_args(ac, av, &data))
		exit(EXIT_FAILURE);
	data.table = init_philo_tab(data.args.pnum);
	test(data.table, data.args.pnum, data.args);
	return (free_philo(&data));
}



// TEST DE LA RECUP DES ARG ET DE L'INIT DE LA TABLE
//
static int test(t_philo *tab, int n, t_args args)
{
	int i = 0;

	printf("%spnum = %d\ttt_die = %d\ttt_eat = %d\ttt_sleep = %d\tlunches = %d%s\n", \
		BLU, args.pnum, args.tt_die, args.tt_eat, args.tt_sleep, args.lunches, NC);
	i = 0;
	while (i < n)
	{
		printf("philo n°%d\tprev = %ld\tlun = %d\tstate = %d\n", \
			tab[i].num, tab[i].prev_lunch, tab[i].lunches, tab[i].state);
		i++;
	}
	return (0);
}
