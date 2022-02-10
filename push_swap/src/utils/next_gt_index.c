/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_gt_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:21:45 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/10 02:21:49 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	next_gt_index(t_number **alst_a)
{
	t_number	*lst;
		int		i;

	lst = *alst_a;
	i = 1;
	while (lst && lst->num < (*alst_a)->num)
	{
		lst = lst->next;
		i++;
	}
	if (!lst)
		return (0);
	return (i);
}
