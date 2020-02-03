# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/02 21:21:51 by akolomoi          #+#    #+#              #
#    Updated: 2019/12/02 21:21:52 by akolomoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04

SRC =   main.cpp

FLAGS = -Wall -Wextra -Werror
GCC = clang++

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	$(GCC) $(FLAGS) -o $(NAME) $(SRC)

fclean: clean

clean:
	rm -f $(NAME)

re: fclean all
