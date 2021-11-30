# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 16:46:14 by flcarval          #+#    #+#              #
#    Updated: 2021/11/29 23:37:00 by flo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
MANDATORY = $(addprefix ft_, atoi.c bzero.c calloc.c isalnum.c\
			isalpha.c isascii.c isdigit.c isprint.c itoa.c memchr.c memcmp.c\
			memcpy.c memmove.c memset.c putchar_fd.c putendl_fd.c putnbr_fd.c\
			putstr_fd.c split.c strchr.c strdup.c striteri.c strjoin.c strlcat.c\
			strlcpy.c strlen.c strmapi.c strncmp.c strnstr.c strrchr.c strtrim.c\
			substr.c tolower.c toupper.c)
BONUSES = $(addprefix ft_, lstadd_back.c lstadd_front.c lstclear.c\
		  lstdelone.c lstiter.c lstlast.c lstmap.c lstnew.c lstsize.c)
OBJS_M = ${MANDATORY:.c=.o}
OBJS_B = ${BONUSES:.c=.o}
CC = gcc
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS_M)
	ar rcs $(NAME) $(OBJS_M)

clean:
	rm -f $(OBJS_M) $(OBJS_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS_M) $(OBJS_B)
	ar rcs $(NAME) $(OBJS_M) $(OBJS_B)

.PHONY: all clean fclean re bonus

