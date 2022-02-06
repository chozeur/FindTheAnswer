/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:28:45 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/06 06:26:01 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	error();

int	is_valid_input(char **inputs)
{
	int	i;

	i = 0;
	while (inputs[i])
	{
		if (ft_atol(inputs[i]) == LONG_MAX)
			return (error());
		if (ft_atol(inputs[i]) == 0 && are_digits(inputs[i]) == 0)
			return (error());
		i++;
	}
	return (1);
}

int	error()
{
	ft_putstr("Please enter integers (int) only.\n");
	return (0);
}
