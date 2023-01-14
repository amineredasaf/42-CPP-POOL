# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 19:53:34 by rsaf              #+#    #+#              #
#    Updated: 2023/01/14 14:28:26 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=program
SRS=main.cpp
CPPF= -Wall -Wextra -Werror -std=c++98

OBJ=$(SRS:.cpp=.o)

all: $(NAME)


%.o: %.cpp whatever.hpp
	c++ $(CPPF) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(CPPF) $^ -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME);