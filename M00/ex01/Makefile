# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/05 14:56:35 by rsaf              #+#    #+#              #
#    Updated: 2022/08/06 14:04:45 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PhoneBook
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRS		=	Contacts.cpp main.cpp PhoneBook.cpp
OBJ		=	$(SRS:.cpp=.o)

%.o		:	%.cpp PhoneBook.hpp Contacts.hpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
	$(CC) $(FLAGS) $^ -o $@

clean	:
	rm -f $(OBJ)

fclean	: clean
	rm -f $(NAME)

re: clean $(NAME)
