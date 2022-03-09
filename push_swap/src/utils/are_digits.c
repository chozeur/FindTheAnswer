/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   are_digits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:35:53 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/09 01:27:48 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	are_digits(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (ft_isdigit(str[i++]))
			return (1);
	return (0);
}
