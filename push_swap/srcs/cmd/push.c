/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:42:37 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/19 00:36:00 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


t_number	**push(t_number **alst_a, t_number **alst_b )
{
	t_number	*tmp;

	if (!(*alst_a))
		return (NULL);
	ft_lstadd_front(alst_b, *alst_a);
	tmp = *alst_a;
	*alst_a = tmp->next;
	return (alst_a);
}

void	ft_lstadd_front(t_number **alst, t_number *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
	*alst = new;
}
