/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:42:37 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/03 18:25:11 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


void	push(t_number **alst_a, t_number **alst_b)
{
	t_number	*tmp;
	t_number	*save;

	if (!(*alst_a))
		return ;
	tmp = ft_lstnew((*alst_a)->num);
	save = (*alst_a)->next;
	if (!alst_b)
		alst_b = &tmp;
	else
		ft_lstadd_front(alst_b, tmp);
	if (!(*alst_a)->next)
	{
		free(*alst_a);
		*alst_a = NULL;
	}
	else
	{
		free(*alst_a);
		*alst_a = save;
	}
	printf("\n\t(*alst_b)->num = %d\n\n", (*alst_b)->num);
}
