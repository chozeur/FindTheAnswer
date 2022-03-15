# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 16:33:34 by flcarval          #+#    #+#              #
#    Updated: 2022/03/15 09:51:11 by flcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FT_PRINTF = $(addprefix src/utils/ft_printf/ft_, hexlen.c nblen.c printf_p.c \
printf_x.c printf.c putchar.c putnbr.c putstr.c putui.c putulhex.c)
UTILS = $(addprefix src/utils/, ft_atoi.c ft_strlcpy.c ft_strlen.c print_pid.c)
SRC = $(FT_PRINTF) $(UTILS)
S_CLIENT = $(src/client.c)
S_SERVER = $(src/server.c)
S_TESTS = $(src/tests.c)
NAME_C = client
NAME_S = server
NAME_T = test
OBJ = $(SRC:%.c=%.o)
OBJ_C = $(S_CLIENT:%.c=%.o)
OBJ_S = $(S_SERVER:%.c=%.o)
OBJ_T = $(S_TESTS:%.c=%.o)
CC = gcc
RM = rm -f
FLAGS = -Wall -Werror -Wextra

all: info1 info2 $(OBJ) $(OBJ_C) $(OBJ_S) done info3
	@$(CC) $(FLAGS) -o $(NAME_C) $(OBJ_C) $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME_S) $(OBJ_S) $(OBJ)
	@echo "✅"
	@echo "\n\t\t\033[0;32Minitalk is ready\033[0m"
test: $(OBJ_T) $(OBJ) info4
	@$(CC) $(FLAGS) -o $(NAME_T) $(OBJ_T) $(OBJ)
	@echo "\n\t\t\033[0;32Test is ready\033[0m"
info1:
	@echo "\n\t\t🔹 \033[0;34mMaking Minitalk\033[0m 🔹\n"
info2:
	@echo "\n🔘 Generating objects files"
info3:
	@echo "\n🔘 Compiling runables"
info4:
	@echo "\n\t\t🔹 \033[0;34mMaking Minitalk (TEST)\033[0m 🔹\n"
done:
	@echo "✅"
%.o:%.c
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)
run: all clean
clean:
	@echo "\033[0;31mDeleting objects files\033[0m"
	@$(RM) $(OBJ) $(OBJ_C) $(OBJ_S) $(OBJ_T)
	@echo "✅\n"
fclean: clean
	@echo "\033[0;31mDeleting runables\033[0m"
	@$(RM) $(NAME_C) $(NAME_S)
	@echo "✅\n"
re: fclean all

.PHONY: all clean fclean re info1 info2 info3 info4 done 100 500 run test
