/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 03:37:16 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/18 05:01:39 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_number **alst)
{
	t_number	*tmp;

	if (!alst)
		return ;
	tmp = *alst;
	*alst = tmp->next;
	tmp->next = (*alst)->next;
	(*alst)->next = tmp;
}
