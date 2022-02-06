/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_input_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:29:06 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/06 06:25:40 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_number	*set_input_numbers(char **inputs)
{
	t_number	*lst;
	t_number	*last;
	t_number	*new;
		int		i;

	if (!inputs[0])
		return (NULL);
	lst = ft_lstnew((int)ft_atol(inputs[0]));
	if (!lst)
		return (NULL);
	last = lst;
	i = 1;
	while (inputs[i])
	{
		new = ft_lstnew((int)ft_atol(inputs[i]));
		if (!new)
			return (NULL);
		ft_lstadd_back(&lst, new);
		last = new;
		i++;
	}
	return (lst);
}
