/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_ACTION.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:42:34 by flcarval          #+#    #+#             */
/*   Updated: 2022/07/09 00:19:57 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/philo.h"

void	log_fork(void)
{
	printf("has taken a fork\n");
}

void	log_eat(void)
{
	printf("%sis eating%s\n", GRN, NC);
}

void	log_sleep(void)
{
	printf("%sis sleeping%s\n", CYN, NC);
}

void	log_think(void)
{
	printf("%sis thinking%s\n", MAG, NC);
}

void	log_die(void)
{
	printf("%sdied%s\n", RED, NC);
}
