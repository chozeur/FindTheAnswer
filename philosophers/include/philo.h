/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:36:45 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 02:26:22 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHILO_H
# define PHILO_H

# include "libs.h"

// 1 SECOND IN US

# define SEC 1000000

// STATES

# define S_SLEEP 111
# define S_THINK 222
# define S_EAT 333

// LOGS

# define L_FORK 100
# define L_EAT 200
# define L_SLEEP 300
# define L_THINK 400
# define L_DIE 500

// UTILS

int				ft_atoi(const char *str);
int				free_philo(t_data *data);

// INIT

int				get_args(int ac, char **av, t_data *data);
t_philo			*init_philo_tab(int pnum, t_data *data);
pthread_mutex_t	*init_forks(int pnum);
int				init_all(t_data *data);
void			launch_it(t_data *data);

// TIME

long			timedif(t_msts ts1, t_msts ts2);
t_msts			get_timestamp_ms(void);

// LOGS

void			log_man(int action, int id, t_data *data);
void			log_fork(void);
void			log_eat(void);
void			log_sleep(void);
void			log_think(void);
void			log_die(void);

// ROUTINE

void			*routine(void *philo);
void			eat(t_philo *philo);
void			asleep(t_philo *philo);
void			think(t_philo *philo);

#endif
