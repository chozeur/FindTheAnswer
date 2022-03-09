/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_alst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 02:09:10 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 02:21:52 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_alst(t_number **alst)
{
	t_number	*lst;
	t_number	*tmp;

	lst = *alst;
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}
