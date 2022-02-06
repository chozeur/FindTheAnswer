/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:39:21 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/06 03:54:01 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sortstack_small(t_number **alst_a)
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
	if (ft_lstsize(*alst_a) == 2)
		swap(alst_a);
	if (ft_lstsize(*alst_a) == 3)
		stack_3(alst_a);
	return ;
}

void	stack_3(t_number **alsta_a)
{
	if (highest(alsta_a) == (*alsta_a)->num)
		rotate(alsta_a);
	if (highest(alsta_a) == (*alsta_a)->next->num)
		reverse_rotate(alsta_a);
	if ((*alsta_a)->num > (*alsta_a)->next->num)
		swap(alsta_a);
}
