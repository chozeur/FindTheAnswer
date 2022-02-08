/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:57:24 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/08 16:41:12 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sortstack_big(t_number **alst_a)
{
	t_number	*lst_b;
	t_number	**alst_b;
		int		*sorted;

	sorted = malloc(sizeof(int) * (ft_lstsize(*alst_a) + 1));
	if (!sorted)
		return ;
	sorted[0] = 1;
	if (is_sorted(alst_a))
	{
		ft_putstr("Stack is already sorted.\n");
		return ;
	}
	lst_b = NULL;
	alst_b = &lst_b;
	while (!is_sorted(alst_a))
	{
		part(ft_lstsize(*alst_a), alst_a, alst_b, sorted);
		sorted[0]++;
	}
}

void	part(int size, t_number **alst_a, t_number **alst_b, int *sorted)
{
		int		piv_num;
		int		i;
		int		low;

	piv_num = (*alst_a)->num;
	low = lowest(alst_a);
	//if (piv_num == low)
	//	reverse_rotate(alst_a, "rra\n");
	push(alst_a, alst_b, "pb\n");
	i = 0;
	while (i < size - 1)
	{
		if (isplaced(piv_num, sorted))
			rotate(alst_a, "rra\n");
		else if ((*alst_a)->num < piv_num)
			push(alst_a, alst_b, "pb\n");
		else
			rotate(alst_a, "rra\n");
		i++;
	}
	reverse_rotate(alst_b, "rrb\n");
	emptystack(alst_a, alst_b);
	sorted[sorted[0]] = piv_num;
}

int	isplaced(int num, int *sorted)
{
	int	i;

	i = 1;
	if (sorted[0] == 1)
		return (0);
	while (i < sorted[0])
	{
		if (sorted[i] == num)
			return (1);
		i++;
	}
	return (0);
}

void	emptystack(t_number **alst_a, t_number **alst_b)
{
	while (ft_lstsize(*alst_b) >= 1)
	{
		push(alst_b, alst_a, "pa\n");
	}
}
