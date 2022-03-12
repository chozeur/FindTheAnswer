/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:57:24 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/12 19:20:29 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sortstack_big(t_number **alst_a)
{
	t_number	*lst_b;
	t_number	**alst_b;
	char		**cmd_tab;

	cmd_tab = ft_calloc(50000, sizeof(char *));
	if (!cmd_tab)
		return ;
	if (is_sorted(alst_a))
	{
		ft_putstr("Stack is already sorted\n");
		return ;
	}
	lst_b = NULL;
	alst_b = &lst_b;
	move_a_to_b(alst_a, alst_b, cmd_tab);
	move_b_to_a(alst_a, alst_b, cmd_tab);
	cmd_tab = opti_tab(cmd_tab);
	print_cmd(cmd_tab);
	free(cmd_tab);
	free_alst(alst_b);
}
