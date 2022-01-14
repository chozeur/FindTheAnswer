/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:05:26 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/14 03:49:37 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_number *lst)
{
	t_number	*number;

	if (!lst)
		return ;
	number = lst;
	while (number)
	{
		ft_putnbr(number->num);
		number = number->next;
	}
}

int	main(int ac, char **av)
{
	t_number	*lst;

	if (ac == 1)
	{
		ft_putstr("You must enter at least 1 integer.\n");
		return (-1);
	}
	lst = set_input_numbers(av);
	if (!lst)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	print_list(lst);
	return (0);
}
