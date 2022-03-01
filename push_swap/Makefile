# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 16:33:34 by flcarval          #+#    #+#              #
#    Updated: 2022/03/01 19:39:26 by flcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ALGO = $(addprefix src/algo/, sortstack_big.c sortstack_small.c)
CMD = $(addprefix src/cmd/, dual_reverse_rotate.c reverse_rotate.c dual_rotate.c \
rotate.c dual_swap.c swap.c push.c)
LST = $(addprefix src/utils/ft_lst/, ft_lstadd_back.c ft_lstdelone.c ft_lstnew.c \
ft_lstadd_front.c ft_lstlast.c ft_lstsize.c)
UTILS = $(addprefix src/utils/, are_digits.c ft_strlen.c median.c \
bubble_sort.c get_args.c move_a_to_b.c ft_atol.c highest_lowest.c \
move_b_to_a.c ft_isdigit.c best_move_a_b.c best_move_b_a.c\
init_array.c print_list.c is_sorted.c puts.c ft_split.c is_valid_input.c \
set_input_numbers.c)
SRC = $(addprefix src/, push_swap.c) $(PS) $(ALGO) $(CMD) $(LST) $(UTILS)
NAME = push_swap
OBJ = $(SRC:.c=.o)
CC = gcc
RM = rm -f
FLAGS = -Wall -Werror -Wextra

all: info1 info2 $(OBJ) done info3
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "✅"
	@echo "\n\t\t\033[0;32mpush_swap is ready\033[0m"
info1:
	@echo "\n\t\t🔹 \033[0;34mMaking push_swap\033[0m 🔹\n"
info2:
	@echo "\n🔘 Generating objects files"
info3:
	@echo "\n🔘 Compiling runable"
info4:
	@echo "\n\t\t🔹 \033[0;34mMaking push_swap\033[0m 🔹\n"
done:
	@echo "✅"
.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)
100: all clean
	@bash push_swap_tester/tester.sh ../push_swap 100 10
500: all clean
	@bash push_swap_tester/tester.sh ../push_swap 500 10
clean:
	@echo "\033[0;31mDeleting objects files\033[0m"
	@$(RM) $(OBJ)
	@echo "✅\n"
fclean: clean
	@echo "\033[0;31mDeleting runable\033[0m"
	@$(RM) $(NAME)
	@echo "✅\n"
re: fclean all

.PHONY: all clean fclean re info1 info2 info3 info4 done
