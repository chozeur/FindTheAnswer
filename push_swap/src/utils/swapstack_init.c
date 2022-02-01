/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapstack_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:41:29 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/01 16:49:19 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swapstack_init(t_number **alst_b)
{
	*alst_b = malloc(sizeof(t_number));
	if (!(*alst_b))
		return ;
	alst_b = NULL;
}
