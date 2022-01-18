/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dual_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 04:57:19 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/18 05:00:53 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	dual_swap(t_number **alst_a, t_number **alst_b)
{
	if (alst_a && alst_b)
	{
		swap(alst_a);
		swap(alst_b);
	}
}
