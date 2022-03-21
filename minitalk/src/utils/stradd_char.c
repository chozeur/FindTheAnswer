/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stradd_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:28:51 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/21 19:03:57 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minitalk.h"

char	*stradd_char(char *str, char c)
{
	char	*res;

	if (!(res = malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	ft_strlcpy(res, str, ft_strlen(str));
	res[ft_strlen(str)] = c;
	res[ft_strlen(str) + 1] = '\0';
	free(str);
	return (res);
}
