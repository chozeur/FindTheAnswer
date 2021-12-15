/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:33:00 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/15 18:17:42 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *input, ...);
int	ft_printf_p(void *ptr);
int	ft_printf_x(unsigned int nb, int caps);
int	ft_nblen(long int nb);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putui(unsigned int nb);
int	ft_putulhex(unsigned long int nb);
int	ft_hexlen(unsigned int nb);

#endif
