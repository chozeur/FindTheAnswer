/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:12:01 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 00:56:46 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	move_b_to_a(t_number **alst_a, t_number **alst_b, char **cmd_tab)
{
	int	i;

	while (ft_lstsize(*alst_b))
	{
		i = best_move_b_a(alst_b, cmd_tab);
		push(alst_b, alst_a, "pa\n", cmd_tab);
		if (i != 0)
		{
			if (i < 0)
				while (i++ != 0)
					rotate(alst_b, "rb\n", cmd_tab);
			else
			{
				while (i > 0)
				{
					best_move_b_a(alst_b, cmd_tab);
					push(alst_b, alst_a, "pa\n", cmd_tab);
					i--;
				}
			}
		}
	}
}
