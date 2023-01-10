# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 14:32:22 by rsaf              #+#    #+#              #
#    Updated: 2023/01/09 19:57:30 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=program
SRS=main.cpp
OBJ=$(SRS:.cpp=.o)
CPPF=-Wall -Wextra -Werror -std=c++98
all: $(NAME)

%.o:%.cpp Data.hpp
	c++ $(CPPF) -c $< -o $@
$(NAME): $(OBJ)
	C++ $(CPPF) $^ -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)

