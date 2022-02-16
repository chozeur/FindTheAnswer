/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:10:03 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/16 17:18:05 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	*init_array(t_number **alst)
{
		int		*res;
	t_number	*lst;
		int		i;

	res = malloc(sizeof(int) * ft_lstsize(*alst));
	if (!res)
		return (NULL);
	lst = *alst;
	i = 0;
	while (lst)
	{
		res[i] = lst->num;
		i++;
		lst = lst->next;
	}
	return (res);
}
