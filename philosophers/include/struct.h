/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:28:03 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/06 16:33:00 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_args{
	int	pnum;
	int	tt_die;
	int	tt_eat;
	int	tt_sleep;
	int	lunches;
}	t_args;

typedef struct	s_data{
	t_args	args;
}	t_data;

#endif
