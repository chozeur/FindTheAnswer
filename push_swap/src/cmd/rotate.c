/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 02:16:01 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/21 01:11:03 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate(t_number **alst)
{
	t_number	*last;
	t_number	*tmp;

	last = ft_lstlast(*alst);
	tmp = *alst;
	*alst = (*alst)->next;
	last->next = tmp;
	tmp->next = NULL;
}
