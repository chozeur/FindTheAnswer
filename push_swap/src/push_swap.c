/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:05:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/07 23:07:17 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
	NEED TO ADD A CHECK FOR DUPLICATED NUMBERS
*/

int	main(int ac, char **av)
{
	t_number	*lst_a;
	t_number	**alst_a;

	lst_a = get_args(ac, av);
	if (!lst_a)
	{
		ft_putstr("\nERROR EXIT\n");
		return (-1);
	}
	alst_a = &lst_a;
	if (ft_lstsize(*alst_a) <= 5)
		sortstack_small(alst_a);
	else
		sortstack_big(alst_a);
	////////////////////////////////
	if (is_sorted(alst_a))
	{
		ft_putstr("\nSorted stack : ");
		print_list(alst_a);
	}
	else
	{
		ft_putstr("Error : not sorted at the end of the program.\n");
		print_list(alst_a);
	}
	////////////////////////////////
}
