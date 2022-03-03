/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:54:55 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/03 17:12:03 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	big_block(int size, t_number **alst_a, t_number **alst_b);
static void	small_block(int piv, t_number **alst_a, t_number **alst_b);

void	move_a_to_b(t_number **alst_a, t_number **alst_b)
{
	while (ft_lstsize(*alst_a) > 2)
		big_block(ft_lstsize(*alst_a), alst_a, alst_b);
	if (ft_lstsize(*alst_a) == 2 && (*alst_a)->num > (*alst_a)->next->num)
		swap(alst_a, "sa\n");
}

static int	big_block(int size, t_number **alst_a, t_number **alst_b)
{
	int	piv;
	int	*arr;
	int	i;

	arr = init_array(alst_a);
	bubble_sort(arr, size);
	piv = quartile(arr, ft_lstsize(*alst_a));
	free(arr);
	i = 0;
	while (i < ((size + 1) / 4))
	{
		check_swaps(alst_a, alst_b);
		small_block(piv, alst_a, alst_b);
		i++;
	}
	return (i);
}

static void	small_block(int piv, t_number **alst_a, t_number **alst_b)
{
	best_move_a_b(alst_a, piv);
	push(alst_a, alst_b, "pb\n");
}
