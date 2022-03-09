/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_b_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:24:02 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 01:09:25 by flcarval         ###   ########.fr       */
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
		while ((*alst) && (*alst)->num != highest(alst) && ++res)
			rotate(alst, "rb\n", cmd_tab);
	else
		while ((*alst) && (*alst)->num != highest(alst) && --res)
			reverse_rotate(alst, "rrb\n", cmd_tab);
	return (res);
}

static int	test_r(t_number **alst)
{
	char	**test_tab;
	int		i;
	int		x;

	test_tab = ft_calloc(1024, sizeof(char *));
	if (!test_tab)
		return (INT_MIN);
	i = 0;
	while ((*alst) && (*alst)->num != highest(alst) && ++i)
		rotate(alst, "", test_tab);
	x = i;
	while (x--)
		reverse_rotate(alst, "", test_tab);
	free(test_tab);
	return (i);
}

static int	test_rr(t_number **alst)
{
	char	**test_tab;
	int		j;
	int		y;

	test_tab = ft_calloc(1024, sizeof(char *));
	if (!test_tab)
		return (INT_MIN);
	j = 0;
	while ((*alst) && (*alst)->num != highest(alst) && ++j)
		reverse_rotate(alst, "", test_tab);
	y = j;
	while (y--)
		rotate(alst, "", test_tab);
	free(test_tab);
	return (j);
}
