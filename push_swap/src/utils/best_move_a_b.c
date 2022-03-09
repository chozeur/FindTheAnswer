/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_a_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:24:02 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 01:34:43 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	test_r(t_number **alst, int piv);
static int	test_rr(t_number **alst, int piv);

void	best_move_a_b(t_number **alst, int piv, char **cmd_tab)
{
	if ((*alst)->num < piv)
		return ;
	else if ((*alst)->next->num < piv)
	{
		swap(alst, "sa\n", cmd_tab);
		return ;
	}
	if (test_r(alst, piv) < test_rr(alst, piv))
		while ((*alst) && (*alst)->num > piv)
			rotate(alst, "ra\n", cmd_tab);
	else
		while ((*alst) && (*alst)->num > piv)
			reverse_rotate(alst, "rra\n", cmd_tab);
}

static int	test_r(t_number **alst, int piv)
{
	char	**test_tab;
	int		i;
	int		x;

	test_tab = ft_calloc(1024, sizeof(char *));
	if (!test_tab)
		return (INT_MIN);
	i = 0;
	while ((*alst) && (*alst)->num > piv && ++i)
		rotate(alst, "", test_tab);
	x = i;
	while (x--)
		reverse_rotate(alst, "", test_tab);
	return (i);
}

static int	test_rr(t_number **alst, int piv)
{
	char	**test_tab;
	int		j;
	int		y;

	test_tab = ft_calloc(1024, sizeof(char *));
	if (!test_tab)
		return (INT_MIN);
	j = 0;
	while ((*alst) && (*alst)->num > piv && ++j)
		reverse_rotate(alst, "", test_tab);
	y = j;
	while (y--)
		rotate(alst, "", test_tab);
	return (j);
}
