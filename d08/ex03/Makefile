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

NAME = mindopen

FLAGS = -Wall -Wextra -Werror

SRC =   main.cpp \
        Decrement.cpp \
        LeftShift.cpp \
        Symbol.cpp \
        GetChar.cpp \
        PutChar.cpp \
        Increment.cpp \
        Cycle.cpp \
        RightShift.cpp

HDR =   Decrement.h \
        LeftShift.h \
        Symbol.h \
        GetChar.h \
        PutChar.h \
        Increment.h \
        Cycle.h \
        RightShift.h

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