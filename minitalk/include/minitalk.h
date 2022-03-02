/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:43:38 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/02 00:38:36 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
//	# include <sys/types.h>
# include <signal.h>

//	ft-printf

	int		ft_printf(const char *input, ...);
	int		ft_printf_p(void *ptr);
	int		ft_printf_x(unsigned int nb, int caps);
	int		ft_nblen(long int nb);
	int		ft_putchar(int c);
	int		ft_putstr(char *str);
	int		ft_putnbr(int nb);
	int		ft_putui(unsigned int nb);
	int		ft_putulhex(unsigned long int nb);
	int		ft_hexlen(unsigned int nb);

//	utils

	void	print_pid();
	int		ft_strlen(const char *str);
	int		ft_strlcpy(char *dst, char *src, int dstsize);

#endif
