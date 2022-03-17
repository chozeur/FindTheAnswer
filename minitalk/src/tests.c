/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 08:58:26 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/17 17:36:42 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int main()
{
	char	src;
	char	dest;
	int		bit;

	src = 'A';
	dest = 0xFF;
	ft_printf("dest : %c (= 0xFF)\n", dest);
	bit = 0;
	while (bit < 8)
	{
		if (src & (0x80 >> bit))
		{
			dest |= 0x80 >> bit;
		}
		else
		{
			dest ^= 0x80 >> bit;
		}
		bit++;
	}
	ft_printf("dest : %c\n", dest);
	return (0);
}
