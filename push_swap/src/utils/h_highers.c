/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_highers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:22:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/10 02:22:56 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	h_highers(t_number **alst_a)
{
		int		res;
	t_number	*lst;

	res = 0;
	lst = *alst_a;
	while (lst)
	{
		if (lst->num > (*alst_a)->num)
			res++;
		lst = lst->next;
	}
	return (res);
}