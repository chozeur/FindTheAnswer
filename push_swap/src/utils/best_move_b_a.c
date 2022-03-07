/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_b_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:24:02 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/07 18:07:40 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	test_r(t_number **alst);
static int	test_rr(t_number **alst);

int	best_move_b_a(t_number **alst, char **cmd_tab)
{
	int	res;

	res = 0;
	if ((*alst)->num == highest(alst))
		return (0);
	else if ((*alst)->next->num == highest(alst))
	{
		swap(alst, "sb\n", cmd_tab);
		return (0);
	}
	if (test_r(alst) < test_rr(alst))
		while ((*alst) && (*alst)->num != highest(alst))
		{
			rotate(alst, "rb\n", cmd_tab);
			res++;
		}
	else
		while ((*alst) && (*alst)->num != highest(alst))
		{
			reverse_rotate(alst, "rrb\n", cmd_tab);
			res--;
		}
	return (res);
}

static int	test_r(t_number **alst)
{
	int	i;
	int	x;
	char	**test_tab;

	test_tab = ft_calloc(1024, sizeof(char*));
	if (!test_tab)
		return (INT_MIN);
	i = 0;
	while ((*alst) && (*alst)->num != highest(alst))
	{
		rotate(alst, "", test_tab);
		i++;
	}
	x = i;
	while (x--)
		reverse_rotate(alst, "", test_tab);
	free(test_tab);
	return (i);
}

static int	test_rr(t_number **alst)
{
	int	j;
	int	y;
	char	**test_tab;

	test_tab = ft_calloc(1024, sizeof(char*));
	if (!test_tab)
		return (INT_MIN);
	j = 0;
	while ((*alst) && (*alst)->num != highest(alst))
	{
		reverse_rotate(alst, "", test_tab);
		j++;
	}
	y = j;
	while (y--)
		rotate(alst, "", test_tab);
	free(test_tab);
	return (j);
}
