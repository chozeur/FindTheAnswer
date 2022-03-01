/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:12:01 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/01 20:03:32 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	move_b_to_a(t_number **alst_a, t_number **alst_b)
{
	int	i;

	while (ft_lstsize(*alst_b))
	{
		i = best_move_b_a(alst_b);
		push(alst_b, alst_a, "pa\n");
		if (i != 0)
		{
			if (i < 0)
				while (i != 0)
				{
					rotate(alst_b, "rb\n");
					i++;
				}
			else
			{
				while (i > 0)
				{
					reverse_rotate(alst_b, "rrb\n");
					i--;
				}
			}
		}
	}
}

