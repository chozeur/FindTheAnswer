/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:33:00 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/13 02:50:04 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(const char *input, ...);
int	ft_printf_p(void *ptr);
int	ft_printf_x(long int nb, int caps);
int	ft_print_ul_hex(unsigned long int nb, int caps);	//caps = <0:LOW_CASE /\ 1:UP_CASE>

#endif
