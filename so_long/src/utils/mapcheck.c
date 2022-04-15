/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:59:21 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/15 21:16:12 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static int	error(int code);
static int	check_elem(char elem, char **map, int len);
static int	check_form(char **map, char len);
static int	check_close(char **map, int len);

int	mapcheck(char **map, int len)
{
	if (!check_form(map, len))
		return (error(100));
	if (!check_close(map, len))
		return (error(200));
	if (!check_elem(COL, map, len))
		return (error(300));
	if (!check_elem(EXIT, map, len))
		return (error(400));
	if (!check_elem(START, map, len))
		return (error(500));
	if (check_elem(START, map, len) > 1)
		return (error(check_elem(START, map, len)));
	return (check_form(map, len));
}

static int	check_elem(char elem, char **map, int len)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < len)
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == elem)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

static int	check_form(char **map, char len)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < len)
	{
		if (!l)
			l = ft_strlen(map[i]);
		if (!l)
			return (0);
		else
		{
			if (ft_strlen(map[i]) != l)
				return (0);
		}
		i++;
	}
	return (l - 1);
}

static int	check_close(char **map, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		if (i == 0 || i == len - 1)
		{
			while (map[i][j + 1])
			{
				if (map[i][j] != '1')
					return (0);
				j++;
			}
		}
		else
		{
			if (map[i][0] != '1' || map[i][ft_strlen(map[i]) - 2] != '1')
				return (0);
		}
		i++;
	}
	return (1);
}

static int	error(int code)
{
	if (code == 100)
		ft_printf("%sThe map's form is invalid%s\n", YLW, NC);
	else if (code == 200)
		ft_printf("%sThe map is not closed%s\n", YLW, NC);
	else if (code == 300)
		ft_printf("%sNo collectible has been found on the map%s\n", YLW, NC);
	else if (code == 400)
		ft_printf("%sNo exit has been found on the map%s\n", YLW, NC);
	else if (code == 500)
		ft_printf("%sNo starting point has been found on the map%s\n", YLW, NC);
	else
		ft_printf("%sFound%s %d %sstarting points on the map, max is 1%s\n", \
			YLW, RED, code, YLW, NC);
	return (0);
}
