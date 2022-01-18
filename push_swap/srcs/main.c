/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:05:26 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/18 23:41:37 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_number *lst);
t_number	*set_input_numbers_bis(char **inputs);

/*---------------------------------------------------*/

int	main(int ac, char **av)
{
	t_number	*lst_a;
	t_number	*lst_b;

	if (ac == 1)
	{
		ft_putstr("You must enter at least 1 integer.\n");
		return (-1);
	}

	/*dual_swap test (ss = sa +  sb)*/
	lst_a = set_input_numbers(av);
	lst_b = set_input_numbers_bis(av);
	if (!lst_a || !lst_b)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	ft_putstr("lst_a :\t");
	print_list(lst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(lst_b);
	ft_putchar('\n');
	dual_swap(&lst_a, &lst_b);
	ft_putchar('\n');
	ft_putstr("lst_a :\t");
	print_list(lst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(lst_b);

	/**/
	return (0);
}

/*-------------------------------------------------------------*/


void	print_list(t_number *lst)
{
	t_number	*number;

	if (!lst)
		return ;
	number = lst;
	while (number)
	{
		ft_putnbr(number->num);
		ft_putchar('\t');
		number = number->next;
	}
}

t_number	*set_input_numbers_bis(char **inputs)
{
	t_number	*lst;
	t_number	*last;
	t_number	*new;
	int			i;

	lst = ft_lstnew((ft_atoi(inputs[1])) * 10);
	if (!lst)
		return (NULL);
	last = lst;
	i = 2;
	while (inputs[i])
	{
		new = ft_lstnew(ft_atoi(inputs[i]));
		if (!new)
			return (NULL);
		ft_lstadd_back(&lst, new);
		last = new;
		i++;
	}
	return (lst);
}
