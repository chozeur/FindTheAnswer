# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 13:31:15 by flcarval          #+#    #+#              #
#    Updated: 2021/12/13 14:03:14 by flcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
UTILS = $(addprefix utils/ft_, long_to_hex.c printf_p.c printf_x.c)
FT_PRINTF = ft_printf.c
EVERY = $(UTILS) $(FT_PRINTF)
OBJS= ${EVERY:.c=.o}
CC = gcc
FLAGS = -Wall -Werror -Wextra
LIBFT = libft/libft.a

mlibft:
	cd libft;make;cd -

all: $(NAME) mlibft

.c.o:
	$(CC) $(FLAGS) -l$(LIBFT) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

mclibft:
	cd libft;make clean;cd -

mfclibft:
	cd libft;make fclean;cd -

clean: mclibft
	rm -f $(OBJS)

fclean: clean mfclibft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

