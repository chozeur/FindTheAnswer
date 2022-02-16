/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:21:31 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/16 17:29:17 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void swap(int *xp, int *yp);

void	bubble_sort(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	{
		while (i < size - 1)
		{
			j = 0;
			while (j < size - i - 1)
			{
				if (arr[j] > arr[j + 1])
					swap(&arr[j], &arr[j + 1]);
				j++;
			}
			i++;
		}
	}
}

static void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
