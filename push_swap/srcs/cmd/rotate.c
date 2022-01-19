/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 02:16:01 by flcarval          #+#    #+#             */
/*   Updated: 2022/01/19 02:46:58 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate(t_number **alst)
{
	t_number	*tmp;

	tmp = ;
	*alst = ft_lstlast(*alst);
	(*alst)->next = tmp;
}
