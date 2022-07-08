/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:34:05 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/06 18:03:28 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include "libs.h"

// 1 SECOND IN US

# define SEC 1000000

// STATES

# define NONE 0
# define SLEEP 111
# define THINK 222
# define EAT 333

// UTILS

int		ft_atoi(const char *str);
int		free_philo(t_data *data);

// INIT

int		get_args(int ac, char **av, t_data *data);
t_philo	*init_philo_tab(int pnum);

// TIME

long	timedif(t_msts ts1, t_msts ts2);
t_msts	get_timestamp_ms(void);


#endif
