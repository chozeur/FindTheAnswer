/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:59:58 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/24 01:19:04 by flcarval         ###   ########.fr       */
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

//	cmd

	void	swap(t_number **alst);
	void	dual_swap(t_number **alst_a, t_number **alst_b);
t_number	*push(t_number **alst_a, t_number **alst_b );
	void	rotate(t_number **alst);
	void	dual_rotate(t_number **alst_a, t_number **alst_b);
	void	reverse_rotate(t_number **alst);
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

//	push_swap

#endif
