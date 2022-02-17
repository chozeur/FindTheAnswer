/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:57:24 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/17 13:49:51 by flcarval         ###   ########.fr       */
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

	if (is_sorted(alst_a))
	{
		ft_putstr("Stack is already sorted\n");
		return ;
	}
	lst_b = NULL;
	alst_b = &lst_b;
	move_a_to_b(alst_a, alst_b);
	ft_putstr("Stack A :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("Stack B :\t");
	print_list(alst_b);
	ft_putchar('\n');
}

void	move_a_to_b(t_number **alst_a, t_number **alst_b)
{
	while (ft_lstsize(*alst_a) > 2)
		big_block(ft_lstsize(*alst_a), alst_a, alst_b);
	if (ft_lstsize(*alst_a) == 2 && (*alst_a)->num > (*alst_a)->next->num)
		swap(alst_a, "sa\n");
}

void	big_block(int size, t_number **alst_a, t_number **alst_b)
{
	int	mid;
	int	*arr;
	int	i;

	arr = init_array(alst_a);
	bubble_sort(arr, size);
	mid = median(arr, ft_lstsize(*alst_a));
	free(arr);
	i = 0;
	while (i < (size / 2))
	{
		small_block(mid, alst_a, alst_b);
		i++;
	}
}

void	small_block(int mid, t_number **alst_a, t_number **alst_b)
{
	if ((*alst_a)->num < mid)
		push(alst_a, alst_b, "pb\n");
	else if ((ft_lstlast(*alst_a))->num < mid)
	{
		reverse_rotate(alst_a, "rra\n");
		push(alst_a, alst_b, "pb\n");
	}
	else
	{
		while ((*alst_a)->num > mid)
			rotate(alst_a, "ra\n");
		push(alst_a, alst_b, "pb\n");
	}
}
