/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_gt_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:21:45 by flcarval          #+#    #+#             */
/*   Updated: 2022/02/15 18:47:53 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*int	next_gt_index(t_number **alst_a)
{
	t_number	*lst;
		int		i;

	lst = *alst_a;
	i = 1;
	while (lst && lst->num < (*alst_a)->num)
	{
		lst = lst->next;
		i++;
	}
	if (!lst)
		return (0);
	return (i);
}*/

static t_number	*goto_middlestack(int size, t_number **alst_a);

int	next_gt_index(int piv_num, t_number **alst_a)
{
	int	size;
	int	i;
	int	res_a;
	int	res_b;
	t_number	*lst;

	size = ft_lstsize(*alst_a);
	i = 0;
	lst = *alst_a;
	while (lst)
	{
		if (lst->num > piv_num && i < (size / 2))
		{
			res_a = i;
			break ;
		}
		lst = lst->next;
		i++;
	}
	i = 0;
	lst = goto_middlestack(size, alst_a);
	while (lst)
	{
		if (lst->num > piv_num)
			res_b = (size / 2) - i;
		lst = lst->next;
		i++;
	}
	if (res_b > res_a)
		return (0);	//reverse rotate
	return (1);	//rotate
}

static t_number	*goto_middlestack(int size, t_number **alst_a)
{
	t_number	*lst;
	int	i;

	i = 0;
	while (i < (size / 2) && lst)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
