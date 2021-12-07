/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:36:01 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/07 17:52:38 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		t;
	char	*ptr;

	i = 0;
	t = -1;
	ptr = NULL;
	while (s[i])
	{
		if ((char)s[i] == (char)c)
			t = i;
		i++;
	}
	if ((char)s[i] == (char)c)
		t = i;
	if (t != -1)
		ptr = (char *)&s[t];
	return (ptr);
}
