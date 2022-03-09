/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highest_lowest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 03:32:22 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 01:24:29 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	highest(t_number **alst)
{
	t_number	*lst;
	int			n;

	n = INT_MIN;
	lst = *alst;
	while (lst)
	{
		if (lst->num > n)
			n = lst->num;
		lst = lst->next;
	}
	return (n);
}

int	lowest(t_number **alst)
{
	t_number	*lst;
	int			n;

	n = INT_MAX;
	lst = *alst;
	while (lst)
	{
		if (lst->num < n)
			n = lst->num;
		lst = lst->next;
	}
	return (n);
}
