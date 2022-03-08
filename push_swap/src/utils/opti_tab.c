/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opti_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:15:11 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/08 18:01:11 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	rrb_raw(char **cmd_tab);
static int	rb_raw(char **cmd_tab);
static int	reco_block(char **cmd_tab);
static int	opti_fill(int rrb, int rb, char **opti);

char	**opti_tab(char **cmd_tab)
{
	char	**opti;
	int	i;
	int	j;
	int	rrb;
	int	rb;

	opti = ft_calloc(50000, sizeof(char *));
	if (!opti)
		return (NULL);
	i = 0;
	j = 0;
	while (cmd_tab[i])
	{
		rb = 0;
		rrb =  0;
		if (reco_block(&cmd_tab[i]))
		{
			rb = rb_raw(&cmd_tab[i]);
			i += rb;
			rrb = rrb_raw(&cmd_tab[i]);
			i += rrb;
			j += opti_fill(rrb, rb, &opti[j]);
		}
		else
		{
			opti[j] = cmd_tab[i];
			i++;
			j++;
		}
	}
	return (opti);
}

static int	rrb_raw(char **cmd_tab)
{
	int	i;

	i = 0;
	while (ft_strncmp("rrb\n", cmd_tab[i], 4) == 0)
		i++;
	return (i);
}

static int	rb_raw(char **cmd_tab)
{
	int	i;

	i = 0;
	while (ft_strncmp("rb\n", cmd_tab[i], 3) == 0)
		i++;
	return (i);
}

static int	reco_block(char **cmd_tab)
{
	int	i;

	i = 0;
	while (cmd_tab[i] && (ft_strncmp("rb\n", cmd_tab[i], 3) == 0))
		i++;
	if (!cmd_tab[i])
		return (0);
	if ((ft_strncmp("rrb\n", cmd_tab[i], 4) == 0))
		return (1);
	else
		return (0);
}

static int	opti_fill(int rrb, int rb, char **opti)
{
	int	i;

	i = 0;
	if (rrb == rb)
		return (0);
	else if (rrb > rb)
	{
		while (i < (rrb - rb))
		{
			opti[i] = "rrb\n";
			i++;
		}
	}
	else
	{
		while (i < (rb - rrb))
		{
			opti[i] = "rb\n";
			i++;
		}
	}
	return (i);
}
