/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:28:03 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/08 18:49:28 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef long	t_msts;
typedef int		t_state;

typedef struct s_args{
	int	pnum;
	int	tt_die;
	int	tt_eat;
	int	tt_sleep;
	int	lunches;
}	t_args;

typedef struct s_philo{
	int				num;
	t_msts			prev_lunch;
	int				lunches;
	t_state			state;
	int				left_fork;
	int				right_fork;
	pthread_t		*th;
	struct s_data	*data;
}	t_philo;

typedef struct s_data{
	t_args			args;
	t_philo			*table;
	pthread_mutex_t	*forks;
}	t_data;

#endif
