/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:59:58 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/18 05:02:17 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_number{
	int			num;
	struct s_number	*next;
}t_number;

//	ft_lst

/*
lst		: first element of the list
alst	: address of the first element's pointing pointer
*/

t_number	*ft_lstnew(int num);
	void	ft_lstadd_back(t_number **alst, t_number *new);
t_number	*ft_lstlast(t_number *lst);
	void	ft_lstdelone(t_number *lst);

//	cmd

void	swap(t_number **alst);
void	dual_swap(t_number **alst_a, t_number **alst_b);

//	puts

	void	ft_putchar(char c);
	void	ft_putstr(char *str);
	void	ft_putnbr(int n);

//	push_swap_utils

	int		ft_atoi(const char *str);
t_number	*set_input_numbers(char **inputs);

//	push_swap

#endif
