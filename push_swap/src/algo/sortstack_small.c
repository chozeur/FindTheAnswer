/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:39:21 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/31 02:48:06 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sortstack_small(t_number **alst_a)
{
	t_number	**alst_b;

	alst_b = NULL;
	*alst_b = NULL;
	while (1)
	{
		while (ft_lstsize(*alst_a))
		{
			push(alst_a, alst_b);
			while ((*alst_a)->num < (*alst_b)->num)
				rotate(alst_b);
		}
		if (ft_lstsize(*alst_a))
			rotate(alst_a);
	}
}
