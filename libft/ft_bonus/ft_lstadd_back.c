/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:49:20 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/29 13:08:19 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*i;

	i = *alst;
	while (i)
	{
		if (i->next == NULL)
		{
			i->next = new;
			i->next->next = NULL;
			break ;
		}
		i = i->next;
	}
}