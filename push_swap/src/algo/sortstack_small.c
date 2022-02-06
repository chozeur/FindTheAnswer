/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:39:21 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/06 04:43:40 by flcarval         ###   ########.fr       */
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
		swap(alst_a, "sa\n");
	if (ft_lstsize(*alst_a) == 3)
		stack_3(alst_a);
	if (ft_lstsize(*alst_a) == 4)
		stack_4(alst_a, alst_b);
	if (ft_lstsize(*alst_a) == 5)
		stack_5(alst_a, alst_b);
}

void	stack_3(t_number **alsta_a)
{
	if (highest(alsta_a) == (*alsta_a)->num)
		rotate(alsta_a, "ra\n");
	if (highest(alsta_a) == (*alsta_a)->next->num)
		reverse_rotate(alsta_a, "rra\n");
	if ((*alsta_a)->num > (*alsta_a)->next->num)
		swap(alsta_a, "sa\n");
}

void	stack_4(t_number **alst_a, t_number **alst_b)
{
	if (highest(alst_a) == (*alst_a)->next->num)
		swap(alst_a, "sa\n");
	else
		while (highest(alst_a) != (*alst_a)->num)
			reverse_rotate(alst_a, "rra\n");
	push(alst_a, alst_b, "pb\n");
	stack_3(alst_a);
	push(alst_b, alst_a, "pa\n");
	rotate(alst_a, "ra\n");
}

void	stack_5(t_number **alst_a, t_number **alst_b)
{
	if (highest(alst_a) == (*alst_a)->next->num)
		swap(alst_a, "sa\n");
	if (highest(alst_a) == (*alst_a)->next->next->num)
	{
		rotate(alst_a, "ra\n");
		rotate(alst_a, "ra\n");
	}
	else
		while (highest(alst_a) != (*alst_a)->num)
			reverse_rotate(alst_a, "rra\n");
	push(alst_a, alst_b, "pb\n");
	stack_4(alst_a, alst_b);
	push(alst_b, alst_a, "pa\n");
	rotate(alst_a, "ra\n");
}
