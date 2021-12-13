/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:41:55 by flcarval          #+#    #+#             */
/*   Updated: 2021/12/13 13:26:32 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main()
{
	int	i;
//	long int 	nb;

//	nb = 42;
	ft_printf("Chaine de caractere vide\n");
	ft_printf("Affiche l'entier 42 : %i\n", 42);
	ft_printf("Affiche l'entier negatif : %d\n", (long int)-42);
	ft_printf("Affiche l'entier 0 : %d\n", 0);
	ft_printf("Affiche la chaine Hello World : %s\n", "Hello World");
	ft_printf("Affiche l'adresse de i : %p\n", &i);
	ft_printf("Affiche 42 en hexa : %x\n", 42);
	ft_printf("Affiche 42 en HEXA : %X\n", 42);
	return (0);
}
