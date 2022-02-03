/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstack_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:39:21 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/03 19:02:42 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sortstack_small(t_number **alst_a)
{
	t_number	*lst_b;
	t_number	**alst_b;

	lst_b = NULL;
	alst_b = &lst_b;
	printf("size = %d\n\n", ft_lstsize(*alst_a));
	if (ft_lstsize(*alst_a) == 2)
		stack_2(alst_a);
	return ;
}

void	stack_2(t_number **alst_a)
{
	if (!is_sorted(alst_a))
		swap(alst_a);
}
