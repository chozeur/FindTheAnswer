/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_highers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:22:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/15 13:04:10 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	h_highers(int n, t_number **alst_a)
{
		int		res;
	t_number	*lst;

	res = 0;
	lst = *alst_a;
	while (lst)
	{
		if (lst->num > n)
			res++;
		lst = lst->next;
	}
	return (res);
}
