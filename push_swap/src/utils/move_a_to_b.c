/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:54:55 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/17 14:20:19 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	big_block(int size, t_number **alst_a, t_number **alst_b);
static void	small_block(int mid, t_number **alst_a, t_number **alst_b);

void	move_a_to_b(t_number **alst_a, t_number **alst_b)
{
	while (ft_lstsize(*alst_a) > 2)
		big_block(ft_lstsize(*alst_a), alst_a, alst_b);
	if (ft_lstsize(*alst_a) == 2 && (*alst_a)->num > (*alst_a)->next->num)
		swap(alst_a, "sa\n");
}

static int	big_block(int size, t_number **alst_a, t_number **alst_b)
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
	return (i);
}

static void	small_block(int mid, t_number **alst_a, t_number **alst_b)
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
