# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 16:33:34 by flcarval          #+#    #+#              #
#    Updated: 2022/03/30 15:44:23 by flcarval         ###   ########.fr        #
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
FT_PRINTF = $(addprefix src/utils/ft_printf/ft_, hexlen.c nblen.c printf_p.c\
printf_x.c printf.c putchar.c putnbr.c putstr.c putui.c putulhex.c)
UTILS = $(addprefix src/utils/, ft_atoi.c ft_strlcpy.c ft_strlen.c print_pid.c\
ft_strdup.c stradd_char.c send_null.c send_bit.c handler_client.c handler_server.c\
print_msg.c reset.c check_args.c ft_isdigit.c frame.c)
SRC = $(FT_PRINTF) $(UTILS)
S_CLIENT = $(addprefix src/, client.c)
S_SERVER = $(addprefix src/, server.c)
S_TESTS = $(addprefix src/, tests.c)
##### NAMES #####
NAME_C = client
NAME_S = server
NAME_T = test
##### OBJECTS #####
OBJ = $(SRC:.c=.o)
OBJ_C = $(S_CLIENT:.c=.o)
OBJ_S = $(S_SERVER:.c=.o)
OBJ_T = $(S_TESTS:.c=.o)
##### COMMANDS #####
CC = gcc
RM = rm -f
FLAGS = -Wall -Werror -Wextra -g3
################################################################################

####################################### RULES ##################################
##### CALL #####
all: info_making_minitalk client server info_comp_client
	@echo "\n\t\t$(GREEN)✅ Minitalk is ready ✅\n$(NC)"

client: info_making_client info_gen_client $(OBJ) $(OBJ_C) done info_comp_client
	@$(CC) $(FLAGS) -o $(NAME_C) $(OBJ_C) $(OBJ)
	@echo "\n\t\t$(YELLOW)🔅 client is ready 🔅\n\n$(NC)"

server: info_making_serv info_gen_serv $(OBJ) $(OBJ_S) done info_comp_serv
	@$(CC) $(FLAGS) -o $(NAME_S) $(OBJ_S) $(OBJ)
	@echo "\n\t\t$(YELLOW)🔅 server is ready 🔅\n\n$(NC)"

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

run: all clean
	@echo "\n$(BLUE)Launching server$(NC)\n"
	@./server

clean:
	@echo "\n$(RED)Deleting objects files$(NC)"
	@$(RM) $(OBJ) $(OBJ_C) $(OBJ_S) $(OBJ_T)
	@echo "\n$(GREEN)-> Objects files deleted\n"

fclean: clean
	@echo "\n$(RED)Deleting runables$(NC)"
	@$(RM) $(NAME_C) $(NAME_S) $(NAME_T)
	@echo "\n$(GREEN)-> Runables deleted\n"

re: fclean all

##### INFOS #####
info_making_minitalk:
	@echo "\n\t\t🔷 $(BLUE)Making Minitalk$(NC) 🔷\n"

info_gen_client:
	@echo "\n🔰 Generating objects files . . ."

info_gen_serv:
	@echo "\n🔰 Generating objects files . . ."

info_comp_client:
	@echo "\n🔰 Compiling runable . . ."

info_comp_serv:
	@echo "\n🔰 Compiling runable . . ."

info_making_test:
	@echo "\n$(YELLOW)-> Making test$(NC)\n"

info_making_client:
	@echo "\n$(YELLOW)-> Making client$(NC)\n"

info_making_serv:
	@echo "\n$(YELLOW)-> Making server$(NC)\n"
################################################################################

.PHONY: all clean fclean re debug info_making_minitalk info_gen_client info_gen_serv info_comp_client info_comp_serv info_making_test info_making_client info_making_serv done 100 500 run
