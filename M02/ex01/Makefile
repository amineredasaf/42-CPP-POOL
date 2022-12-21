# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 01:41:09 by rsaf              #+#    #+#              #
#    Updated: 2022/12/15 19:36:16 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ChapterV
C_FLAGS=-Wall -Wextra -std=c++98
SRS=main.cpp Fixed.cpp
OBJ=$(SRS:.cpp=.o)
all: $(NAME)
%.o:%.cpp Fixed.hpp
	c++ $(C_FLAGS) -c $< -o $@
$(NAME): $(OBJ)
	c++ $(C_FLAGS) $^ -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all