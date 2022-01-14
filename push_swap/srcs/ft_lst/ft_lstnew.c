/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:33:44 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/07 18:30:20 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_number	*ft_lstnew(t_number *prev, int num)
{
	t_number	*res;

	res = malloc(sizeof(t_number));
	if (res == NULL)
		return (NULL);
	res->num = num;
	res->next = NULL;
	res->prev = prev;
	return (res);
}
