/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opti_fill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 00:09:09 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 01:48:05 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	opti_fill(int rrb, int rb, char **opti)
{
	int	i;

	i = 0;
	if (rrb == rb)
		return (0);
	else if (rrb > rb)
		while (i < (rrb - rb))
			opti[i++] = "rrb\n";
	else
		while (i < (rb - rrb))
			opti[i++] = "rb\n";
	return (i);
}
