/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 02:35:47 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/08 23:54:07 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
