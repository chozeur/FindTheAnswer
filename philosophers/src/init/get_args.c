/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:09:42 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/06 18:27:42 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

static int	check_args(t_args args);
static int	args_error(void);
static int	invalid_args(void);

int	get_args(int ac, char **av, t_data *data)
{
	if (!(ac == 5 || ac == 6))
		return (args_error());
	data->args.pnum = ft_atoi(av[1]);
	data->args.tt_die = ft_atoi(av[2]);
	data->args.tt_eat = ft_atoi(av[3]);
	data->args.tt_sleep = ft_atoi(av[4]);
	if (ac == 6)
		data->args.lunches = ft_atoi(av[5]);
	else
		data->args.lunches = -1;
	return (check_args(data->args));
}

static int	check_args(t_args args)
{
	if ((args.lunches == 0 || args.pnum <= 0 || args.tt_die <= 0 \
		|| args.tt_eat <= 0 || args.tt_sleep <= 0))
		return (invalid_args());
	else
		return (0);
}

static int	args_error(void)
{
	printf("\n💡 Use as : ./philo %s[1]%s %s[2]%s %s[3]%s %s[4]%s (%s[5]%s)\n", \
		GRN, NC, YEL, NC, BLU, NC, MAG, NC, CYN, NC);
	printf("\n\t%s1%s : <number_of_philosophers>\n\t%s2%s : <time_to_die>", \
		GRN, NC, YEL, NC);
	printf("\n\t%s3%s : <time_to_eat>\n\t%s4%s : <time_to_sleep>", \
		BLU, NC, MAG, NC);
	printf("\n\t%s5%s : <number_of_times_each_philosopher_must_eat>\n\n", \
		CYN, NC);
	return (1);
}

static int	invalid_args(void)
{
	printf("\n%sEach arguments must be integers >= 1\n\n", RED);
	return (2);
}
