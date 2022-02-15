/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:24:28 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/15 13:05:37 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	part(int size, t_number **alst_a, t_number **alst_b)
{
		int		piv_num;
		int		i;
		int		p;

	piv_num = (*alst_a)->num;
	push(alst_a, alst_b, "pb\n");
	i = 0;
	p = 0;
	while (i < size - 1 && p < h_highers(piv_num, alst_a))
	{
		if ((*alst_a)->num > piv_num)
		{
			push(alst_a, alst_b, "pb\n");
			p++;
		}
		else
		{
			if (next_gt_index(alst_a) < (ft_lstsize(*alst_a) / 2))
				rotate(alst_a, "ra\n");
			else
				reverse_rotate(alst_a, "rra\n");
		}
		i++;
	}
	emptystack(alst_a, alst_b);
}
