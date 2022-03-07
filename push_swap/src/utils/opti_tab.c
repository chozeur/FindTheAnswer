/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opti_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:15:11 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/07 23:18:02 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	rb_raw(char **cmd_tab);
static int	rrb_raw(char **cmd_tab);

char	**opti_tab(char **cmd_tab)
{
	int	i;
	int	j;
	char	**res;
	int	rrb;
	int	rb;
	int	n;
	int	x;

	rrb = 0;
	rb = 0;
	i = 0;
	j = 0;
	n = 0;
	res = ft_calloc(50000, sizeof(char *));
	if (!res)
		return (NULL);
	while (cmd_tab[i])
	{
		while (ft_strncmp("rrb\n", cmd_tab[i], 4) == 0 ||
				ft_strncmp("rb\n", cmd_tab[i], 3) == 0)
		{
			x = 0;
			if (ft_strncmp("rrb\n", cmd_tab[i], 4) == 0)
				rrb = rrb_raw(&cmd_tab[i]);
			i += rrb;
			if (ft_strncmp("rb\n", cmd_tab[i], 3) == 0)
				rb = rb_raw(&cmd_tab[i]);
			i += rb;
			if (rrb > rb)
			{
				n = rrb - rb;
				while (x < n)
				{
					res[j] = "rrb\n";
					j++;
					x++;
				}
			}
			else if (rrb < rb)
			{
				n = rb - rrb;
				while (x < n)
				{
					res[j] = "rb\n";
					j++;
					x++;
				}
			}
		}
		res[j] = cmd_tab[i];
		i++;
		j++;
	}
	return (res);
}

static int	rb_raw(char **cmd_tab)
{
	int	i;

	i = 0;
	while (ft_strncmp("rb\n", cmd_tab[i], 3) == 0)
		i++;
	return (i);
}

static int	rrb_raw(char **cmd_tab)
{
	int	i;

	i = 0;
	while (ft_strncmp("rrb\n", cmd_tab[i], 4) == 0)
		i++;
	return (i);
}
