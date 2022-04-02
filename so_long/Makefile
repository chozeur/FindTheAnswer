# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 16:33:34 by flcarval          #+#    #+#              #
#    Updated: 2022/04/02 02:44:41 by flcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####################################### VARS ###################################
##### COLORS #####
BLUE = \033[0;34m
YELLOW = \033[0;33m
PURPLE = \033[0;35m
RED = \033[0;31m
GREEN = \033[0;32m
NC = \033[0m
##### SOURCES #####
#UTILS = $(addprefix src/utils/, )
SRC = $(addprefix src/, so_long.c)
##### NAMES #####
NAME = so_long
##### OBJECTS #####
OBJ = $(SRC:.c=.o)
##### COMMANDS #####
CC = gcc
RM = rm -f
FLAGS = -Wall -Werror -Wextra -L./Lib42 -l42 -L./minilibx-linux -lmlx -lXext -lX11
################################################################################

####################################### RULES ##################################
##### CALL #####
all: $(NAME)

$(NAME): info_making $(OBJ)
	@make re -C ./Lib42
	@make re -C ./minilibx-linux
	@$(CC) $(OBJ) $(FLAGS) -o $(NAME)
	@echo "\n\t\t$(GREEN)✅ $(NAME) is ready ✅\n$(NC)"

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

run: all clean

clean:
	@echo "\n$(RED)Deleting objects files\n$(NC)"
	@$(RM) $(OBJ)
	@make clean -C ./Lib42
	@make clean -C ./minilibx-linux
	@echo "\n$(GREEN)-> Objects files deleted\n"

fclean: clean
	@echo "\n$(RED)Deleting runables$(NC)"
	@$(RM) $(NAME)
	@echo "\n$(GREEN)-> Runables deleted\n"

re: fclean all

##### INFOS #####
info_making:
	@echo "\n\t\t🔷 $(BLUE)Making $(NAME)$(NC) 🔷\n"
################################################################################

.PHONY: all clean fclean re debug info_making_minitalk info_gen info_gen_serv info_comp info_comp_serv info_making_test info_making info_making_serv done 100 500 run
