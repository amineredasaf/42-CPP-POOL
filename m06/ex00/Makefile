# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 15:18:15 by rsaf              #+#    #+#              #
#    Updated: 2023/01/07 21:02:36 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Conversion
CPPF=-Wall -Wextra -Werror -std=c++98
SRS=main.cpp Conversion.cpp
OBJ=$(SRS:.cpp=.o)

all:$(NAME)

%.o:%.cpp Conversion.hpp
	c++ $(CPPF) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(CPPF) $^ -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)