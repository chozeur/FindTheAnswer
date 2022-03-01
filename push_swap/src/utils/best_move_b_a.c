/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_b_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:24:02 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/01 20:23:34 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	test_r(t_number **alst);
static int	test_rr(t_number **alst);

int	best_move_b_a(t_number **alst)
{
	int	res;

	res = 0;
	if ((*alst)->num == highest(alst))
		return (0);
	else if ((*alst)->next->num == highest(alst))
	{
		swap(alst, "sb\n");
		return (0);
	}
	if (test_r(alst) < test_rr(alst))
		while ((*alst) && (*alst)->num != highest(alst))
		{
			rotate(alst, "rb\n");
			res++;
		}
	else
		while ((*alst) && (*alst)->num != highest(alst))
		{
			reverse_rotate(alst, "rrb\n");
			res--;
		}
	return (res);
}

static int	test_r(t_number **alst)
{
	int	i;
	int	x;

	i = 0;
	while ((*alst) && (*alst)->num != highest(alst))
	{
		rotate(alst, "");
		i++;
	}
	x = i;
	while (x--)
		reverse_rotate(alst, "");
	return (i);
}

static int	test_rr(t_number **alst)
{
	int	j;
	int	y;

	j = 0;
	while ((*alst) && (*alst)->num != highest(alst))
	{
		reverse_rotate(alst, "");
		j++;
	}
	y = j;
	while (y--)
		rotate(alst, "");
	return (j);
}
