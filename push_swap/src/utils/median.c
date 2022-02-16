/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:40:21 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/16 18:37:18 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	median(int *arr, int size)
{
	int	res;

	if (!(size % 2))
	{
		res = arr[(size + 1) / 2];
	}
	else
		res = (arr[size / 2] * 2 + 1) / 2;
	return (res);
}
