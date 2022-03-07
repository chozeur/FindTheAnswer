/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:17:52 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/07 18:52:37 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate(t_number **alst, char *cmd, char **cmd_tab)
{
	t_number	*tmp;
	t_number	*last;

	last = ft_lstlast(*alst);
	tmp = *alst;
	*alst = last;
	(*alst)->next = tmp;
	while (tmp->next != *alst)
		tmp = tmp->next;
	tmp->next = NULL;
	putintab(cmd, cmd_tab);
}
