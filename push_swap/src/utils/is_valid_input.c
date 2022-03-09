/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:28:45 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 03:38:32 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	error(void);
static int	isonly_num(char *str);
static int	isdup(char **inputs, int ac);
static int	is_al(int num, int *tab, int ac);

int	is_valid_input(char **inputs, int ac)
{
	int	i;

	i = 0;
	while (inputs[i])
	{
		if (ft_atol(inputs[i]) == LONG_MAX)
			return (error());
		if (ft_atol(inputs[i]) == 0 && are_digits(inputs[i]) == 0)
			return (error());
		if (isonly_num(inputs[i]) == 0)
			return (error());
		i++;
	}
	isdup(inputs, ac);
	return (1);
}

static int	isonly_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			if (!(i == 0 && str[i] == '-'))
				return (0);
		}
		i++;
	}
	return (1);
}

static int	isdup(char **inputs, int ac)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int) * ac);
	if (!tab)
		return (-1);
	i = 0;
	while (i < ac)
	{
		if (is_al(ft_atol(inputs[i]), tab, ac))
			return (error());
		else
			tab[i] = ft_atol(inputs[i]);
		i++;
	}
	free(tab);
	return (1);
}

static int	is_al(int num, int *tab, int ac)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (num == tab[i])
			return (1);
		i++;
	}
	return (0);
}

static int	error(void)
{
	ft_putstr("Please enter (single) integers only.\n");
	return (-1);
}
