/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:29:24 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/24 01:58:24 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_sorted(t_number **alst)
{
	int	size;
	t_number	*j;
	int	tmp;

	size = ft_lstsize(*alst);
	j = *alst;
	while (j->next)
	{
		tmp = j->num;
		j = j->next;
		if (tmp > j->num)
			return (0);
	}
	return (1);
}
