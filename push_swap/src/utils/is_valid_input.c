/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:28:45 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 17:52:16 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	error(void);
static int	isonly_num(char *str);

int	is_valid_input(char **inputs, int ac)
{
	int	i;

	(void)ac;
	i = 0;
	while (inputs[i])
	{
		if (ft_atol(inputs[i]) == LONG_MAX)
			return (error());
		if (ft_atol(inputs[i]) == 0 && are_digits(inputs[i]) == 0)
			return (error());
		if (isonly_num(inputs[i]) == 0)
			return (error());
		i++;
	}
	return (1);
}

static int	isonly_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			if (!(i == 0 && str[i] == '-'))
				return (0);
		}
		i++;
	}
	return (1);
}

static int	error(void)
{
	ft_putstr("Please enter (single) integers only.\n");
	return (0);
}
