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

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;

	(void)del;
	if (lst == NULL)
		return (NULL);
	res = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
