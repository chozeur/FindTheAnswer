/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 04:53:43 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 01:09:55 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_number	*get_args(int ac, char **av)
{
	char		**args;
	t_number	*lst;

	if (ac == 1)
	{
		ft_putstr("You must enter at least one integer.");
		return (NULL);
	}
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = &av[1];
	if (!is_valid_input(args))
		return (NULL);
	lst = set_input_numbers(args);
	if (!lst)
	{
		ft_putstr("You must enter at least one integer.");
		return (NULL);
	}
	return (lst);
}
