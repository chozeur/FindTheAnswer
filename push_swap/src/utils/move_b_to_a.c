/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:12:01 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/17 15:47:26 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	move_b_to_a(t_number **alst_a, t_number **alst_b, int init_size)
{
	int	i;

	while (ft_lstsize(*alst_b))
	{
		if ((*alst_b)->next && (*alst_b)->next->num == highest(alst_b))
		{
			swap(alst_b, "sb\n");
			push(alst_b, alst_a, "pa\n");
		}
		else if (ft_lstsize(*alst_b) <= init_size / 2)
		{
			while ((*alst_b)->num != highest(alst_b))
			{
				rotate(alst_b, "rb\n");
				i++;
			}
			push(alst_b, alst_a, "pa\n");
		}
		else
		{
			i = 0;
			while ((*alst_b)->num != highest(alst_b))
			{
				rotate(alst_b, "rb\n");
				i++;
			}
			push(alst_b, alst_a, "pa\n");
			while (i)
			{
				reverse_rotate(alst_b, "rrb\n");
				i--;
			}
		}
	}
}
