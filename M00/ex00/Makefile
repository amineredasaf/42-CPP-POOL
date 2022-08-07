# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/05 14:56:27 by rsaf              #+#    #+#              #
#    Updated: 2022/08/05 14:56:28 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
CC		=	c++
FLAGS	=	-Wall -Wextra -std=c++98
SRS		=	megaphone.cpp
OBJ		=	${SRS:.cpp=.o}

%.o		:	%.cpp
	${CC} ${FLAGS} -c $< -o $@

$(NAME)	:	$(OBJ)
	${CC} $(FLAGS) $^ -o $@

clean	:
	rm -f ${OBJ}

fclean	: clean
	rm -f ${NAME}

re		:	fclean ${NAME}