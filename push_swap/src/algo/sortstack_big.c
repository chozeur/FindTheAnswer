/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:57:24 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/17 15:30:05 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*void	sortstack_big(t_number **alst_a)
{
	t_number	*lst_b;
	t_number	**alst_b;

	if (is_sorted(alst_a))
	{
		ft_putstr("Stack is already sorted.\n");
		return ;
	}
	lst_b = NULL;
	alst_b = &lst_b;
	while (!is_sorted(alst_a))
	{
		part(ft_lstsize(*alst_a), alst_a, alst_b);
		rotate(alst_a, "ra\n");
	}
}*/

void	sortstack_big(t_number **alst_a)
{
	t_number	*lst_b;
	t_number	**alst_b;
		int		init_size;

	if (is_sorted(alst_a))
	{
		ft_putstr("Stack is already sorted\n");
		return ;
	}
	lst_b = NULL;
	alst_b = &lst_b;
	init_size = ft_lstsize(*alst_a);
	move_a_to_b(alst_a, alst_b);
	move_b_to_a(alst_a, alst_b, init_size);
}
