# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 05:41:30 by rsaf              #+#    #+#              #
#    Updated: 2022/08/28 01:02:51 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Moarbrainz
CFLAG=-Wall -Wextra -Werror -std=c++98
SRS= main.cpp Zombie.cpp zombieHorde.cpp
OBJ=$(SRS:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAG) $^ -o $@
%.o:%.c Zombie.hpp
	c++ $(CFLAG) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean re