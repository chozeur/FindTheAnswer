/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:05:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/26 16:18:21 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_number	*lst_a;
	t_number	*lst_b;
	t_number	**alst_a;
	t_number	**alst_b;
		char	**args;

	if (ac == 1)
	{
		ft_putstr("You must enter at least 1 integer.\n");
		return (-1);
	}
	if (ac == 2)
		args = ft_split(av[1], ' ');
}
