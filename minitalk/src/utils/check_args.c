/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 07:35:12 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/27 09:29:00 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

static int	strnum(char *str);
static int	error1(void);
static int	error2(void);
static int	error3(void);

int	check_args(int ac, char **av)
{
	if (ac != 3)
		return (error1());
	if (!strnum(av[1]))
		return (error2());
	if (av[2][0] == '\0')
		return (error3());
	return (1);
}

static int	strnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	error1(void)
{
	frame("💡 Use like : ./client <server_pid> <Your message>");
	return (0);
}

static int	error2(void)
{
	frame("💡 <server_pid> must contain digits ONLY");
	return (0);
}

static int	error3(void)
{
	frame("🤐 Seems like you didn't say anything...");
	return (0);
}
