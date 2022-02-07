/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:57:24 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/07 02:53:28 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sortstack_big(t_number **alst_a)
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
		print_list(alst_a);
		part(ft_lstsize(*alst_a), alst_a, alst_b);
	}
}

void	part(int size, t_number **alst_a, t_number **alst_b)
{
		int		piv_num;
		int		i;

	piv_num = (*alst_a)->num;
	if (piv_num == lowest(alst_a))
		reverse_rotate(alst_a, "rra\n");				// MB TEST RRA
	push(alst_a, alst_b, "pb\n");
	i = 0;
	while (i < size - 1)
	{
		if ((*alst_a)->num < piv_num)
			push(alst_a, alst_b, "pb\n");
		else
			rotate(alst_a, "ra\n");
		i++;
	}
	reverse_rotate(alst_b, "rrb\n");
	emptystack(alst_a, alst_b);
}

void	emptystack(t_number **alst_a, t_number **alst_b)
{
	while (ft_lstsize(*alst_b) >= 1)
	{
		push(alst_b, alst_a, "pa\n");
	}
}
