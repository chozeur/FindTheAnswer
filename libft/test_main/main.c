/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:33:55 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/23 19:07:44 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * toupper
 * tolower
 * strchr
 * strrchr
 * strnstr
 * strncmp
 * strlen
 * strlcat
 * strlcpy
 * strdup
 * memset
 * memcpy
 * memmove
 * memcmp
 * memchr
 * isprint
 * isdigit
 * isascii
 * isalpha
 * isalnum
 * calloc
 * bzero
 * atoi
 * */


#include "../header/libft.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	main(void)
{
// strlen
	char	len[256] = "Cette chaine fait 20";
	if (ft_strlen(len) == strlen(len))
		printf("ft_strlen : OK\n");
	else
		printf("ft_strlen : FAIL\n");
// toupper
	char	low0 = 'c';
	char	low1 = 'A';
	char	low2 = '0';
	char	low3 = '!';
	if (toupper(low0) == ft_toupper(low0) && toupper(low0) == ft_toupper(low0) && toupper(low0) == ft_toupper(low0) && toupper(low0) == ft_toupper(low0))
		printf("ft_toupper : OK\n");
	else
		printf("ft_toupper : FAIL\n");
// tolower
	char	up0 = 'C';
	char	up1 = 'a';
	char	up2 = '0';
	char	up3 = '!';
	if (tolower(up0) == ft_tolower(up0) && tolower(up1) == ft_tolower(up1) && tolower(up2) == ft_tolower(up2) && tolower(up3) == ft_tolower(up3))
		printf("ft_tolower : OK\n");
	else
		printf("ft_tolower : FAIL\n");
}
