# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 02:21:27 by rsaf              #+#    #+#              #
#    Updated: 2022/12/29 00:04:00 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ScavTrap
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRS		=	main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ		=	${SRS:.cpp=.o}

%.o		:	%.cpp ClapTrap.hpp ScavTrap.hpp
	${CC} ${FLAGS} -c $< -o $@

$(NAME)	:	$(OBJ)
	${CC} $(FLAGS) $^ -o $@

clean	:
	rm -f ${OBJ}

fclean	: clean
	rm -f ${NAME}

re		:	fclean ${NAME}