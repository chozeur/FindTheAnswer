/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:00:26 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/07 18:30:17 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_lstiter(t_number *lst, void (*f)(void *))
{
	t_number	*i;

	i = lst;
	while (i)
	{
		(*f)(i->num);
		i = i->next;
	}
}
