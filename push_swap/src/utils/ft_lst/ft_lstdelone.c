/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:13:23 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/31 02:38:54 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	del(void *ptr)
{
	free(ptr);
	ptr = NULL;
}

void	ft_lstdelone(t_number *lst)
{
	del(&(lst->num));
	del(&(lst->next));
	free(lst);
	lst = NULL;
}
