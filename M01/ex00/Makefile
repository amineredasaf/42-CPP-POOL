# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 01:45:07 by rsaf              #+#    #+#              #
#    Updated: 2022/08/26 02:11:14 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=BraiiiiiiinnnzzzZ
C_FLAGS=-Wall -Wextra -Werror -std=c++98
SRS=newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
OBJ=$(SRS:.cpp=.o)
all: $(NAME)
%.o:%.cpp Zombie.hpp
	c++ $(C_FLAGS) -c $< -o $@
$(NAME): $(OBJ)
	c++ $(C_FLAGS) $^ -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all