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

NAME = unnecessary_violence

SRC =   Weapon.cpp \
        HumanA.cpp \
        HumanB.cpp \
        main.cpp

HDR =   Weapon.hpp \
        HumanA.hpp \
        HumanB.hpp

FLAGS = -Wall -Wextra -Werror
GCC = clang++

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	$(GCC) $(FLAGS) -o $(NAME) $(SRC)

fclean: clean

clean:
	rm -f $(NAME)

re: fclean all
