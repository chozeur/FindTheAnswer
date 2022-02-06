/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:59:58 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/06 04:39:14 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_number{
	int				num;
	struct s_number	*next;
}	t_number;

//	ft_lst

/*
lst		: first element of the list
alst	: address of the first element's pointing pointer
*/

t_number	*ft_lstnew(int num);
	void	ft_lstadd_back(t_number **alst, t_number *new);
t_number	*ft_lstlast(t_number *lst);
	void	ft_lstdelone(t_number *lst);
	int		ft_lstsize(t_number *lst);
	void	ft_lstadd_front(t_number **alst, t_number *new);

//	cmd

/*
some of them need the output string as second argument
*/

	void	swap(t_number **alst, char *cmd);
	void	dual_swap(t_number **alst_a, t_number **alst_b);
	void	push(t_number **alst_a, t_number **alst_b, char *cmd);
	void	rotate(t_number **alst, char *cmd);
	void	dual_rotate(t_number **alst_a, t_number **alst_b);
	void	reverse_rotate(t_number **alst, char *cmd);
	void	dual_reverse_rotate(t_number **alst_a, t_number **alst_b);

//	puts

	void	ft_putchar(char c);
	void	ft_putstr(char *str);
	void	ft_putnbr(int n);

//	push_swap_utils

	int		ft_atoi(const char *str);
t_number	*set_input_numbers(char **inputs);
	int		is_sorted(t_number **alst);
	int		is_valid_input(char *input);
	int		ft_strlen(const char *str);
	char	**ft_split(char const *s, char c);
	void	swapstack_init(t_number **alst_b);
	int		highest(t_number **alst);
	int		lowest(t_number **alst);

//	algo

	void	sortstack_small(t_number **alst_a);
	void	stack_3(t_number **alsta_a);
	void	stack_4(t_number **alst_a, t_number **alst_b);
	void	stack_5(t_number **alst_a, t_number **alst_b);

//	push_swap

#endif
