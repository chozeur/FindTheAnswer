/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:43:14 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/31 17:55:46 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	ft_lstadd_front(t_number **alst, t_number *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
	*alst = new;
}
