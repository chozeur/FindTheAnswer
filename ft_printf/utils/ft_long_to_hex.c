/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_to_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:07:28 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/09 18:29:54 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

char	*ft_long_to_hex(unsigned long int nb)
{
	char	*hex;
	char	*res;
	int		i;

	i = 0;
	hex = malloc(17);
	if (!hex)
		return (NULL);
	hex = "0123456789abcdef";
	res = malloc(25);
	if (!res)
		return (NULL);
	if (nb > 16)
	{
		ft_long_to_hex(nb / 16);
		i++;
	}
	res[i] = hex[nb % 16];
	i++;
	return (res);
}

#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_long_to_hex(42));
	printf("%s\n", ft_long_to_hex(0));
	printf("%s\n", ft_long_to_hex(99999999));
	return (0);
}
