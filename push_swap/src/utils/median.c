/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:40:21 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/17 13:47:39 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	median(int *arr, int size)
{
	int	res;

	if (size % 2 == 1)
	{
		res = arr[((size + 1) / 2) - 1];
	}
	else
		res = (arr[((size + 1) / 2) - 1] + arr[(size / 2) - 1]) / 2;
	return (res);
}
