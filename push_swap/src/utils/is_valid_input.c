/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:28:45 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/24 02:26:40 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_valid_input(char *input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	if (ft_atoi(input) == -1 && ft_strlen(input) >= 3)
		return (0);
	return (1);
}
