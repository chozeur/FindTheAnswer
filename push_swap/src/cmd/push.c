/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:42:37 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/01 16:34:19 by flcarval         ###   ########.fr       */
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
}
