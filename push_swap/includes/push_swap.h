/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:59:58 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/14 02:55:13 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_number{
	int			num;
	t_number	*prev;
	t_number	*next;
}t_number;

//	ft_lst

/*
lst		: first element of the list
alst	: address of the first element's pointing pointer
*/

t_number	*ft_lstnew(t_number *prev, int num);
	void	ft_lstadd_back(t_number **alst, t_number *new);

//	push_swap_utils

	void	ft_putstr(char *str);
t_number	*set_input_numbers(char **inputs);

//	push_swap

#endif
