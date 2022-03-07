/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opti_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:15:11 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/07 19:36:38 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	**opti_tab(char **cmd_tab)
{
	int	i;

	i = 0;
	while (cmd_tab[i])
	{

	}
}

int	rb_raw(char **cmd_tab)
{
	int	i;

	i = 0;
	while (ft_strncmp("rb\n", cmd_tab[i], 3) == 0)
		i++;
	return (i);
}

int	rrb_raw(char **cmd_tab)
{
	int	i;

	i = 0;
	while (ft_strncmp("rrb\n", cmd_tab[i], 4) == 0)
		i++;
	return (i);
}
