/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 04:53:43 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/13 07:07:21 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	is_wss(char *str);
static void	*free_args(char **args, int s);

t_number	*get_args(int ac, char **av)
{
	char		**args;
	t_number	*lst;
	int			s;

	if (ac == 1)
		return (NULL);
	if (ac == 2)
	{
		if (av[1][0] == '\0' || is_wss(av[1]))
			return (NULL);
		s = 1;
		args = ft_split(av[1], ' ');
	}
	else
	{
		s = 0;
		args = &av[1];
	}
	if (!is_valid_input(args))
		return (free_args(args, s));
	lst = set_input_numbers(args);
	if (!lst)
		return (free_args(args, s));
	free_args(args, s);
	return (lst);
}

static int	is_wss(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] != ' ')
			return (0);
	return (1);
}

static void	*free_args(char **args, int s)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	if (!args)
		return (NULL);
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	return (NULL);
}
