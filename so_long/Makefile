# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 16:33:34 by flcarval          #+#    #+#              #
#    Updated: 2022/04/04 03:10:34 by flcarval         ###   ########.fr        #
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
TEST = $(addprefix ./, test.c)
SRC = $(addprefix src/, so_long.c)
KEY_HDL = $(addprefix src/key_handler/, key_handler.c handle_no_event.c)
RENDER = $(addprefix src/render/, render.c render_rect.c render_background.c\
render_xpm.c)
UTILS = $(addprefix src/utils/, init_map.c maplen.c mapcheck.c)
##### NAMES #####
NAME = so_long
##### OBJECTS #####
OBJ = $(SRC:.c=.o) $(KEY_HDL:.c=.o) $(RENDER:.c=.o) $(UTILS:.c=.o)
OBJ_T = $(TEST:.c=.o) $(KEY_HDL:.c=.o) $(RENDER:.c=.o) $(UTILS:.c=.o)
##### COMMANDS #####
CC = gcc
RM = rm -f
FLAGS = -Wall -Werror -Wextra -L./Lib42 -l42 -L./minilibx-linux -lmlx -lXext -lX11
################################################################################

####################################### RULES ##################################
##### CALL #####
all: $(NAME)

test: $(OBJ_T)
	@make re -C ./Lib42
	@make re -C ./minilibx-linux
	@$(CC) $(OBJ_T) $(FLAGS) -o test
	@echo "\n\t\t$(GREEN)✅ test is ready ✅\n$(NC)"

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
	@$(RM) $(OBJ) $(OBJ_T)
	@make clean -C ./Lib42
	@make clean -C ./minilibx-linux
	@echo "\n$(GREEN)-> Objects files deleted\n"

fclean: clean
	@echo "\n$(RED)Deleting runables$(NC)"
	@$(RM) $(NAME) test
	@echo "\n$(GREEN)-> Runables deleted\n"

re: fclean all

##### INFOS #####
info_making:
	@echo "\n\t\t🔷 $(BLUE)Making $(NAME)$(NC) 🔷\n"
################################################################################

.PHONY : so_long test all run clean fclean re info_making
