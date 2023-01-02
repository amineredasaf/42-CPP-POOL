# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 05:54:31 by rsaf              #+#    #+#              #
#    Updated: 2023/01/01 20:11:25 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 NAME=program
 CPPF=-Wall -Wextra -Werror
 SRS=main.cpp Bureaucrat.cpp
 INC=Bureaucrat.hpp
 OBJ=$(SRS:.cpp=.o)
all: $(NAME)

%.o:%.cpp $(INC)
	c++ $(CPPF) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(CPPF) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)