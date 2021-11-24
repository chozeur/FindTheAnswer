/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:33:55 by flcarval          #+#    #+#             */
/*   Updated: 2021/11/24 12:30:23 by flcarval         ###   ########.fr       */
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
// strchr
	char	schr1[256] = "On cherche le caractere [D min] dans cette phrase de trois d";
	char	Dmin = 'd';
	if (ft_strchr(schr1, Dmin) == strchr(schr1, Dmin))
		printf("ft_strchr : OK\n");
	else
		printf("ft_strchr : FAIL\n");
// strrchr
	if (ft_strrchr(schr1, Dmin) == strrchr(schr1, Dmin))
		printf("ft_strrchr : OK\n");
	else
		printf("ft_strrchr : FAIL\n");
// strnstr
	char	look0[256] = "Just look at it";
	char	tofind[256] = "look";

	if (ft_strnstr(look0, tofind, 42) == strnstr(look0, tofind, 42) && ft_strnstr(look0, tofind, 3) == strnstr(look0, tofind, 3))
		printf("ft_strnstr : OK\n");
	else
		printf("ft_strnstr : FAIL\n");
// strncmp
	char	cmp0[256] = "Verifions ft_strncmp";
	char	cmp1[256] = "Verifions ft_strncmp";
	char	cmp2[256] = "Verification de ft_strncmp";

	if (ft_strncmp(cmp0, cmp1, 42) == strncmp(cmp0, cmp1, 42) && ft_strncmp(cmp0, cmp1, 5) == strncmp(cmp0, cmp1, 5) && ft_strncmp(cmp0, cmp2, 42) == strncmp(cmp0, cmp2, 42) && ft_strncmp(cmp0, cmp2, 5) == strncmp(cmp0, cmp2, 5))
		printf("ft_strncmp : OK\n");
	else
		printf("ft_strncmp : FAIL\n");
// strlen
	char	slen0[256] = "test len";
	char	slen1[256] = "";

	if (ft_strlen(slen0) == strlen(slen0) && ft_strlen(slen1) == strlen(slen1))
		printf("ft_strlen : OK\n");
	else
		printf("ft_strlen : FAIL\n");
// strlcat
	char	srcat0[256] = "Chaine 1";
	char	srcat1[256] = "Chaine 2";
	char	ft_srcat0[256] = "Chaine 1";
	char	ft_srcat1[256] = "Chaine 2";

	if (ft_strlcat(ft_srcat0, ft_srcat1, ft_strlen(ft_srcat0) + 1) == strlcat(srcat0, srcat1, ft_strlen(srcat0) + 1))
	{
		printf("ft_strlcat : OK\n");
		printf("ft_strlcat = %s\n", ft_srcat0);
		printf("strlcat = %s\n", srcat0);
	}
	else
		printf("ft_strlcat : FAIL\n");
// strlcpy
	char	srcpy0[256] = "copiee";
	char	srcpy1[256] = "COPIEE";
	char	ft_srcpy0[256] = "copiee";
	char	ft_srcpy1[256] = "COPIEE";

	if (ft_strlcpy(ft_srcpy0, ft_srcpy1, ft_strlen(ft_srcpy0) + 1) == strlcpy(srcpy0, srcpy1, ft_strlen(srcpy0) + 1))
	{
		printf("ft_strlcpy : OK\n");
		printf("ft_strlcpy = %s\n", ft_srcpy0);
		printf("strlcpy = %s\n", srcpy0);
	}
	else
		printf("ft_strlcpy : FAIL\n");
// strdup
	char	ft_sdup0[256] = "duplicated";
	char	*ft_sdup1;
	char	sdup0[256] = "duplicated";
	char	*sdup1;

	ft_sdup1 = ft_strdup(ft_sdup0);
	sdup1 = strdup(sdup0);
	if (strcmp(ft_sdup1, sdup1) == 0)
		printf("ft_strdup : OK\n");
	else
		printf("ft_strdup : FAIL\n");
// memset
	char	ft_mset[256] = "    \0";
	char	mset[256] = "    \0";
	char	cset = 'T';

	ft_memset(ft_mset, cset, 4);
	memset(mset, cset, 4);
	if (strcmp(ft_mset, mset) == 0)
		printf("ft_memset : OK\n");
	else
		printf("ft_memset : FAIL\n");
}
