/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:05:57 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/14 03:49:38 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}

t_number	*set_input_numbers(char **inputs)
{
	t_number	*lst;
	t_number	*last;
	t_number	*new;
	int	i;

	lst = ft_lstnew(NULL, ft_atoi(inputs[1]));
	if (!lst)
		return (NULL);
	last = lst;
	i = 2;
	while (inputs[i])
	{
		new = ft_lstnew(last, ft_atoi(inputs[i]));
		if (!new)
			return (NULL);
		ft_lstadd_back(&lst, new);
		last = new;
		i++;
	}
	return (lst);
}
