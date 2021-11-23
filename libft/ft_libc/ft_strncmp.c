/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:35:41 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/23 14:50:59 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int	t;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		t = s1[i] - s2[i];
		if (t != 0)
			return (t);
		i++;
	}
	return (t);
}
