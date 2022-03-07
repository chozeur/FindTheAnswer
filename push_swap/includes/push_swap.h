/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:59:58 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/07 18:56:46 by flcarval         ###   ########.fr       */
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

	void	swap(t_number **alst, char *cmd, char **cmd_tab);
	void	dual_swap(t_number **alst_a, t_number **alst_b, char **cmd_tab);
	void	push(t_number **alst_a, t_number **alst_b, char *cmd, char **cmd_tab);
	void	rotate(t_number **alst, char *cmd, char **cmd_tab);
	void	dual_rotate(t_number **alst_a, t_number **alst_b, char **cmd_tab);
	void	reverse_rotate(t_number **alst, char *cmd, char **cmd_tab);
	void	dual_reverse_rotate(t_number **alst_a, t_number **alst_b, char **cmd_tab);

//	puts

	void	ft_putchar(char c);
	void	ft_putstr(char *str);
	void	ft_putnbr(int n);
	void	putintab(char *cmd, char **cmd_tab);

//	push_swap_utils

	long	ft_atol(const char *str);
t_number	*set_input_numbers(char **inputs);
	int		is_sorted(t_number **alst);
	int		is_valid_input(char **inputs);
	int		ft_strlen(const char *str);
	char	**ft_split(char const *s, char c);
	int		highest(t_number **alst);
	int		lowest(t_number **alst);
t_number	*get_args(int ac, char **av);
	int		are_digits(char *str);
	int		ft_isdigit(char c);
	int		isonly_num(char *str);
	int		*init_array(t_number **alst);
	void	bubble_sort(int *arr, int size);
	int		median(int *arr, int size);
	int		quartile(int *arr, int size);
	void	best_move_a_b(t_number **alst, int piv, char **cmd_tab);
	int		best_move_b_a(t_number **alst, char **cmd_tab);
	void	check_swaps(t_number **alst_a, t_number **alst_b, char **cmd_tab);
	void	*ft_calloc(size_t count, size_t size);
	void	ft_bzero(void *s, size_t n);
	void	print_cmd(char **cmd_tab);

//	algo

	void	sortstack_small(t_number **alst_a);
	void	stack_3(t_number **alsta_a, char **cmd_tab);
	void	stack_4(t_number **alst_a, t_number **alst_b, char **cmd_tab);
	void	stack_5(t_number **alst_a, t_number **alst_b, char **cmd_tab);
	void	sortstack_big(t_number **alst_a);
	void	move_a_to_b(t_number **alst_a, t_number **alst_b, char **cmd_tab);
	void	move_b_to_a(t_number **alst_a, t_number **alst_b, char **cmd_tab);

//	push_swap

// tests

	void	print_list(t_number **alst);

#endif
