# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 21:22:46 by rsaf              #+#    #+#              #
#    Updated: 2022/12/27 18:39:41 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Zoo
CPPFLAG= -Wall -Wextra -Werror -std=c++98
SRS= main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
INC= Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
OBJ=$(SRS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(INC)
	c++ $(CPPFLAG) -c $< -o $@
$(NAME): $(OBJ)
	c++ $(CPPFLAG) $^ -o $@
clean:
	rm $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)