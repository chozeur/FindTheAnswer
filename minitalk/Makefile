# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    .MakefileBU                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 00:58:00 by flcarval          #+#    #+#              #
#    Updated: 2022/05/09 21:05:26 by flcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

all:
	@make all -C Mclient
	@make all -C Mserver

$(NAME): all

clean:
	@make clean -C Mclient
	@make clean -C Mserver

fclean:
	@make fclean -C Mclient
	@make fclean -C Mserver

re: fclean all

$(NAME): all
