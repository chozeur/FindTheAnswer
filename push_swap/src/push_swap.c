/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:05:46 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/06 06:25:58 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_number **alst);

int	main(int ac, char **av)
{
	t_number	*lst_a;
	t_number	**alst_a;

	lst_a = get_args(ac, av);
	if (!lst_a)
	{
		ft_putstr("\nERROR EXIT\n");
		return (-1);
	}
	alst_a = &lst_a;
	if (ft_lstsize(*alst_a) <= 5)
		sortstack_small(alst_a);
	ft_putstr("\nSorted stack : ");
	print_list(alst_a);
}

void	print_list(t_number **alst)
{
	t_number	*number;

	if (!(*alst) || !alst)
		return ;
	number = *alst;
	while (number)
	{
		ft_putnbr(number->num);
		ft_putchar('\t');
		number = number->next;
	}
}
