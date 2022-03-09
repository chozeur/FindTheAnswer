/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dual_reverse_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:34:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/08 23:48:23 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	dual_reverse_rotate(t_number **alst_a, t_number **alst_b,
							char **cmd_tab)
{
	char	**test_tab;

	test_tab = ft_calloc(1024, sizeof(char *));
	if (!test_tab)
		return ;
	reverse_rotate(alst_a, "", test_tab);
	reverse_rotate(alst_b, "", test_tab);
	putintab("rrr\n", cmd_tab);
	free(test_tab);
}
