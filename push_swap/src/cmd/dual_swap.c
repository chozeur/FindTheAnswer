/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dual_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 04:57:19 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/07 18:55:41 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	dual_swap(t_number **alst_a, t_number **alst_b, char **cmd_tab)
{
	char	**test_tab;

	test_tab = ft_calloc(1024, sizeof(char*));
	if (!test_tab)
		return ;
	swap(alst_a, "", test_tab);
	swap(alst_b, "", test_tab);
	putintab("ss\n", cmd_tab);
	free(test_tab);
}
