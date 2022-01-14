/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:06:44 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/07 18:30:19 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_number	*ft_lstmap(t_number *lst, void *(*f)(void *), void (*del)(void *))
{
	t_number	*res;
	t_number	*new;

	(void)del;
	if (lst == NULL)
		return (NULL);
	res = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->num));
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
