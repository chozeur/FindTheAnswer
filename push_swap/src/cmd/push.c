/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:42:37 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/31 02:41:15 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


t_number	*push(t_number **alst_a, t_number **alst_b)
{
	t_number	*tmp;
	t_number	*pmp;

	tmp = *alst_b;
	pmp = (*alst_a)->next;
	*alst_b = *alst_a;
	(*alst_b)->next = tmp;
	return (pmp);
}
