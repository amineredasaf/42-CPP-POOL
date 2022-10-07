# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 14:33:59 by rsaf              #+#    #+#              #
#    Updated: 2022/10/05 20:46:20 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=UnnecessaryViolence
CFLAGS= -Wall -Werror -Wextra -std=c++98
SRS=main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
INC=HumanA.hpp HumanB.hpp Weapon.hpp
OBJ=$(SRS:.cpp=.o)
%.o:.%c $(INC)
	c++ $(CFLAGS) -c $< -o $@
all: $(NAME)
$(NAME):$(OBJ)
	c++ $(CFLAGS) $^ -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all