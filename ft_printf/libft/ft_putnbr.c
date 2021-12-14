/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:05:40 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/14 02:56:58 by flo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nb_len(long int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		i++;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(long int nb)
{
	long int	NB;

	NB = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
	return (ft_nb_len(NB) + (NB < 0));
}

/*
int main()
{
	long int	i = -42;
	ft_putnbr(i);
	return (0);
}
*/
