/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isber.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:57:27 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/18 18:04:45 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

static void	delwhite(char *mpath);

int	isber(char *mpath)
{
	int	len;

	delwhite(mpath);
	if (!mpath || mpath[0] == '\0')
		return (1);
	len = ft_strlen(mpath);
	if (mpath[len - 1] == 'r' && mpath[len - 2] == 'e' && mpath[len - 3] == 'b'\
		&& mpath[len - 4] == '.')
		return (1);
	return (0);
}

static void	delwhite(char *mpath)
{
	int	i;

	i = ft_strlen(mpath) - 1;
	while (i > -1)
	{
		if (mpath[i] == ' ')
			mpath[i] = '\0';
		i--;
	}
}
