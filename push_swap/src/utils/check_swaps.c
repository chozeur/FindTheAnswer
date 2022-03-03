/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_swaps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:01:41 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/03 17:08:35 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	check_swaps(t_number **alst_a, t_number **alst_b)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if ((*alst_a) && (*alst_a)->next)
		if ((*alst_a)->num > (*alst_a)->next->num)
			a = 1;
	if ((*alst_b) && (*alst_b)->next)
		if ((*alst_b)->num < (*alst_b)->next->num)
			b = 1;
	if (a || b)
	{
		if (a && b)
			dual_swap(alst_a, alst_b);
		else if (a)
			swap(alst_a, "sa\n");
		else
			swap(alst_b, "sb\n");
	}
}
