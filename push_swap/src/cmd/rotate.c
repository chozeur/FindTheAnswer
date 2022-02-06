/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 02:16:01 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/06 04:06:20 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate(t_number **alst, char *cmd)
{
	t_number	*last;
	t_number	*tmp;

	if (ft_lstsize(*alst) == 1)
		return ;
	last = ft_lstlast(*alst);
	tmp = *alst;
	*alst = (*alst)->next;
	last->next = tmp;
	tmp->next = NULL;
	ft_putstr(cmd);
}
