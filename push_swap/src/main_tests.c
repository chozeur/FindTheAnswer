/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 00:05:26 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/17 13:37:37 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

	void	print_list(t_number **lst);
t_number	*set_input_numbers_bis(char **inputs);

/*---------------------------------------------------*/

int	main(int ac, char **av)
{
/*
	t_number	*lst_a;
	t_number	*lst_b;
	t_number	**alst_a;
	t_number	**alst_b;
		char	**args;

	if (ac == 1)
	{
		ft_putstr("You must enter at least one integer.");
		return (-1);
	}
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = &av[1];
	lst_a = set_input_numbers(args);
	if (!lst_a)
	{
		ft_putstr("You must enter at least one integer.");
		return (-1);
	}
	ft_putstr("lst_a :\t");
	print_list(&lst_a);
*/
	/*dual_swap test (ss = sa +  sb)*/
/*	ft_putstr("\n\n\ndual_swap test (ss = sa +  sb)\n\n");
	lst_a = set_input_numbers(args);
	lst_b = set_input_numbers_bis(args);
	if (!lst_a || !lst_b)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	alst_b = &lst_b;
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);
	ft_putchar('\n');
	dual_swap(alst_a, alst_b);
	ft_putchar('\n');
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);

	ft_putstr("\n\n");
*/
	/*push test (pa = pb)*/
/*	ft_putstr("\n\n\npush test (pa = pb)\n\n");
	lst_a = set_input_numbers(av);
//	lst_b = set_input_numbers_bis(av);
	lst_b = NULL;
	if (!lst_a)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	alst_b = &lst_b;
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);
	ft_putchar('\n');
	push(alst_a, alst_b);
	ft_putchar('\n');
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);
	ft_putchar('\n');
	ft_putchar('\n');
*/
	/*rotate test*/
/*	ft_putstr("\n\n\nrotate test\n\n");
	lst_a = set_input_numbers(av);
	if (!lst_a)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	rotate(alst_a);
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
*/
	/*dual_rotate test*/
/*	ft_putstr("\n\n\ndual_rotate test\n\n");
	lst_a = set_input_numbers(av);
	lst_b = set_input_numbers_bis(av);
	if (!lst_a || !lst_b)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	alst_b = &lst_b;
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);
	ft_putchar('\n');
	dual_rotate(alst_a, alst_b);
	ft_putchar('\n');
	print_list(alst_b);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);
	ft_putstr("\n\n");
*/
	/*reverse_rotate test*/
/*	ft_putstr("\n\n\nreverse_rotate test\n\n");
	lst_a = set_input_numbers(av);
	if (!lst_a)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	reverse_rotate(alst_a);
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putchar('\n');
*/
	/*dual_reverse_rotate test*/
/*	ft_putstr("\n\n\ndual_reverse_rotate test\n\n");
	lst_a = set_input_numbers(av);
	lst_b = set_input_numbers_bis(av);
	if (!lst_a || !lst_b)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	alst_b = &lst_b;
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);
	ft_putchar('\n');
	dual_reverse_rotate(alst_a, alst_b);
	ft_putchar('\n');
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);
	ft_putstr("\n\n");
*/
	/*is_sorted test*/
/*	ft_putstr("\n\n\nis_sorted test\n\n");
	lst_a = set_input_numbers(av);
	if (!lst_a)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	if (is_sorted(alst_a))
		ft_putstr("\nA stack is sorted.\n");
	else
		ft_putstr("A stack isn't sorted.\n");
*/
	/*is_valid_input tes*/
/*	ft_putstr("\n\n\nis_valid_input test\n\n");
	if (is_valid_input(av[1]))
		ft_putstr("inputs are valid\n");
	else
		ft_putstr("inputs are not valid\n");
*/

	/*ft_lstadd_front test*/
/*	ft_putstr("\n\n\nft_lstadd_front test\n\n");
	lst_a = set_input_numbers(args);
	lst_b = set_input_numbers_bis(args);
	if (!lst_a || !lst_b)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	alst_b = &lst_b;
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);
	ft_putchar('\n');
	ft_lstadd_front(alst_b, ft_lstnew((*alst_a)->num));
	ft_putchar('\n');
	ft_putstr("lst_a :\t");
	print_list(alst_a);
	ft_putchar('\n');
	ft_putstr("lst_b :\t");
	print_list(alst_b);

	ft_putstr("\n\n");
*/
	/*highest_lowest test*/
/*	ft_putstr("\n\n\nhighest_lowest test\n\n");
	lst_a = set_input_numbers(av);
	if (!lst_a)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	ft_putstr("Highest is : ");
	ft_putnbr(highest(alst_a));
	ft_putchar('\n');
	ft_putstr("Lowest is : ");
	ft_putnbr(lowest(alst_a));
*/
	/*sortstack_small test*/
/*	ft_putstr("\n\n\nsortstack_small test\n\n");
	lst_a = set_input_numbers(av);
	if (!lst_a)
	{
		ft_putstr("An error occured. Please debug.\n");
		return (-1);
	}
	alst_a = &lst_a;
	ft_putstr("before :\t");
	print_list(alst_a);
	ft_putchar('\n');
	sortstack_small(alst_a);
	ft_putstr("after  :\t");
	print_list(alst_a);
	ft_putchar('\n');
*/
	/*sortstack_small test*/
/*	int	arr[3]={12, 42, 97};
	ft_putstr("La mediane attendue est 42 . . . -> ");
	ft_putnbr(median(arr, 3));
*/
	return (0);
}

/*-------------------------------------------------------------*/

t_number	*set_input_numbers_bis(char **inputs)
{
	t_number	*lst;
	t_number	*last;
	t_number	*new;
	int			i;

	lst = ft_lstnew((ft_atol(inputs[1])) * 10);
	if (!lst)
		return (NULL);
	last = lst;
	i = 2;
	while (inputs[i])
	{
		new = ft_lstnew((ft_atol(inputs[i]) * 10));
		if (!new)
			return (NULL);
		ft_lstadd_back(&lst, new);
		last = new;
		i++;
	}
	return (lst);
}
