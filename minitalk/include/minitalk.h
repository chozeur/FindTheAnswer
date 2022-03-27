/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 23:43:38 by flcarval          #+#    #+#             */
/*   Updated: 2022/03/27 09:27:27 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <sys/types.h>
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

void	print_pid(void);
int		ft_strlen(const char *str);
int		ft_strlcpy(char *dst, char *src, int dstsize);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*stradd_char(char *str, char c);
char	*ft_strdup(const char *s1);
int		send_null(pid_t pid);
int		send_bit(char *msg, pid_t pid);
void	handler_client(int signum);
void	reset(int *bit, char *c);
void	handler_server(int signum, siginfo_t *info, void *ptr);
char	*print_msg(char *msg, pid_t *pid, int *bit, char *c);
int		check_args(int ac, char **av);
int		ft_isdigit(int c);
void	frame(char *str);

#endif
