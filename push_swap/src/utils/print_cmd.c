/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:10:34 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/07 18:11:46 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_cmd(char **cmd_tab)
{
	int	i;

	i = 0;
	while (cmd_tab[i])
	{
		ft_putstr(cmd_tab[i]);
		i++;
	}
}
