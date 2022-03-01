/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:40:21 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/01 19:40:13 by flcarval         ###   ########.fr       */
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

int	quartile(int *arr, int size)
{
	int	res;
	int	*tmp;
	int	i;

	tmp = malloc(sizeof(int) * ((size + 1) / 2));
	if (!tmp)
		return (INT_MIN);
	i = 0;
	while (i < (size + 1) / 2)
	{
		tmp[i] = arr[i];
		i++;
	}
	res = median(tmp, ((size + 1) / 2));
	return (res);
}
