/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:54:43 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/08 16:44:27 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int	ft_lstsize(t_number *lst)
{
	t_number	*count;
	int			i;

	count = lst;
	i = 0;
	while (count != NULL)
	{
		count = count->next;
		i++;
	}
	return (i);
}
