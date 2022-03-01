/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_a_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:24:02 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/01 20:23:30 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	test_r(t_number **alst, int piv);
static int	test_rr(t_number **alst, int piv);

void	best_move_a_b(t_number **alst, int piv)
{
	if ((*alst)->num < piv)
		return ;
	else if ((*alst)->next->num < piv)
	{
		swap(alst, "sa\n");
		return ;
	}
	if (test_r(alst, piv) < test_rr(alst, piv))
		while ((*alst) && (*alst)->num > piv)
			rotate(alst, "ra\n");
	else
		while ((*alst) && (*alst)->num > piv)
			reverse_rotate(alst, "rra\n");
}

static int	test_r(t_number **alst, int piv)
{
	int	i;
	int	x;

	i = 0;
	while ((*alst) && (*alst)->num > piv)
	{
		rotate(alst, "");
		i++;
	}
	x = i;
	while (x--)
		reverse_rotate(alst, "");
	return (i);
}

static int	test_rr(t_number **alst, int piv)
{
	int	j;
	int	y;

	j = 0;
	while ((*alst) && (*alst)->num > piv)
	{
		reverse_rotate(alst, "");
		j++;
	}
	y = j;
	while (y--)
		rotate(alst, "");
	return (j);
}
