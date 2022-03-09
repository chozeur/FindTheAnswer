/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:39:21 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/08 23:33:26 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sortstack_small(t_number **alst_a)
{
	t_number	*lst_b;
	t_number	**alst_b;
	char		**cmd_tab;

	cmd_tab = ft_calloc(50000, sizeof(char *));
	if (!cmd_tab)
		return ;
	if (is_sorted(alst_a))
	{
		ft_putstr("Stack is already sorted.\n");
		return ;
	}
	lst_b = NULL;
	alst_b = &lst_b;
	if (ft_lstsize(*alst_a) == 2)
		swap(alst_a, "sa\n", cmd_tab);
	if (ft_lstsize(*alst_a) == 3)
		stack_3(alst_a, cmd_tab);
	if (ft_lstsize(*alst_a) == 4)
		stack_4(alst_a, alst_b, cmd_tab);
	if (ft_lstsize(*alst_a) == 5)
		stack_5(alst_a, alst_b, cmd_tab);
	print_cmd(cmd_tab);
	free(cmd_tab);
}

void	stack_3(t_number **alsta_a, char **cmd_tab)
{
	if (highest(alsta_a) == (*alsta_a)->num)
		rotate(alsta_a, "ra\n", cmd_tab);
	if (highest(alsta_a) == (*alsta_a)->next->num)
		reverse_rotate(alsta_a, "rra\n", cmd_tab);
	if ((*alsta_a)->num > (*alsta_a)->next->num)
		swap(alsta_a, "sa\n", cmd_tab);
}

void	stack_4(t_number **alst_a, t_number **alst_b, char **cmd_tab)
{
	if (highest(alst_a) == (*alst_a)->next->num)
		swap(alst_a, "sa\n", cmd_tab);
	else
		while (highest(alst_a) != (*alst_a)->num)
			reverse_rotate(alst_a, "rra\n", cmd_tab);
	push(alst_a, alst_b, "pb\n", cmd_tab);
	stack_3(alst_a, cmd_tab);
	push(alst_b, alst_a, "pa\n", cmd_tab);
	rotate(alst_a, "ra\n", cmd_tab);
}

void	stack_5(t_number **alst_a, t_number **alst_b, char **cmd_tab)
{
	if (highest(alst_a) == (*alst_a)->next->num)
		swap(alst_a, "sa\n", cmd_tab);
	if (highest(alst_a) == (*alst_a)->next->next->num)
	{
		rotate(alst_a, "ra\n", cmd_tab);
		rotate(alst_a, "ra\n", cmd_tab);
	}
	else
		while (highest(alst_a) != (*alst_a)->num)
			reverse_rotate(alst_a, "rra\n", cmd_tab);
	push(alst_a, alst_b, "pb\n", cmd_tab);
	stack_4(alst_a, alst_b, cmd_tab);
	push(alst_b, alst_a, "pa\n", cmd_tab);
	rotate(alst_a, "ra\n", cmd_tab);
}
