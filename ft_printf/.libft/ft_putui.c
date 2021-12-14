/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:31:55 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/14 17:38:15 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putui(unsigned int nb)
{
	int	len;

	len = ft_nblen((long int)nb);
	if (nb > 9)
		ft_putui(nb / 10);
	ft_putchar(nb % 10 + 48);
	return (len);
}
