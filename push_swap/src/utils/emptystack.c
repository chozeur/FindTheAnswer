/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emptystack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:22:27 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/10 02:22:28 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	emptystack(t_number **alst_a, t_number **alst_b)
{
	while (ft_lstsize(*alst_b) >= 1)
	{
		push(alst_b, alst_a, "pa\n");
	}
}
