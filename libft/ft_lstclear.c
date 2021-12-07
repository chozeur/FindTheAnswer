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

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;
	t_list	*j;

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
