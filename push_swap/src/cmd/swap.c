/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 03:37:16 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/07 18:52:44 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_number **alst, char *cmd, char **cmd_tab)
{
	t_number	*tmp;

	if (!alst)
		return ;
	tmp = *alst;
	*alst = tmp->next;
	tmp->next = (*alst)->next;
	(*alst)->next = tmp;
	putintab(cmd, cmd_tab);
}
