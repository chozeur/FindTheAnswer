/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:51:53 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/07 18:30:14 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_lstclear(t_number **lst, void (*del)(void *))
{
	t_number	*i;
	t_number	*j;

	if (lst)
	{
		i = *lst;
		while (i)
		{
			j = i->next;
			ft_lstdelone(i, del);
			i = j;
		}
		*lst = NULL;
	}
}
