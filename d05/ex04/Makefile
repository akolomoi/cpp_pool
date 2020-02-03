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

NAME = bureaucrat

SRC =   Bureaucrat.cpp \
        ShrubberyCreationForm.cpp \
        PresidentialPardonForm.cpp \
        Intern.cpp \
        OfficeBlock.cpp \
        Form.cpp \
        RobotomyRequestForm.cpp \
        main.cpp

HDR =   Bureaucrat.hpp \
        Intern.hpp \
        OfficeBlock.hpp \
        ShrubberyCreationForm.hpp \
        PresidentialPardonForm.hpp \
        RobotomyRequestForm.hpp \
        Form.hpp

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
