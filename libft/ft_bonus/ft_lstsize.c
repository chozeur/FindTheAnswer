/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:54:43 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/26 19:06:33 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*count;
	int	i;

	count = lst;
	i = 1;
	while (count != NULL)
	{
		count = count->next;
		i++;
	}
	return (i);
}
