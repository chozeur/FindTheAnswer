# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 16:33:34 by flcarval          #+#    #+#              #
#    Updated: 2021/12/13 17:39:12 by flcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/ft_, long_to_hex.c printf.c printf_p.c printf_x.c)
INCLUDES = -Iincludes -Ilibft
NAME = libftprintf.a
OBJS = $(SRCS:.c=.o)
CC = gcc
RM = @rm -f
LIBFT = libft/libft.a
FLAGS = -Wall -Werror -Wextra $(INCLUDES)

all: $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	make -C libft -f Makefile
	mv $(LIBFT) ./$(NAME)
	ar rc $(NAME) $(OBJS)

clean:
	make -C libft -f Makefile clean
	$(RM) $(OBJS)

fclean: clean
	make -C libft -f Makefile fclean
	$(RM) $(NAME)


re: fclean all

.PHONY: all clean fclean re
