/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dual_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:13:09 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/08 23:46:39 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	dual_rotate(t_number **alst_a, t_number **alst_b, char **cmd_tab)
{
	char	**test_tab;

	test_tab = ft_calloc(1024, sizeof(char *));
	if (!test_tab)
		return ;
	rotate(alst_a, "", cmd_tab);
	rotate(alst_b, "", cmd_tab);
	putintab("rr\n", cmd_tab);
	free(test_tab);
}
