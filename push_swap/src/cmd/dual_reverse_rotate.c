/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dual_reverse_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 01:34:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/06 04:02:47 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	dual_reverse_rotate(t_number **alst_a, t_number **alst_b)
{
	reverse_rotate(alst_a, "");
	reverse_rotate(alst_b, "");
	ft_putstr("rrr\n");
}
