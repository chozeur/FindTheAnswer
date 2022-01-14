/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:51:53 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/14 04:29:10 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_lstclear(t_number **lst)
{
	t_number	*i;
	t_number	*j;

	if (lst)
	{
		i = *lst;
		while (i)
		{
			j = i->next;
			ft_lstdelone(i);
			i = j;
		}
		*lst = NULL;
	}
}
