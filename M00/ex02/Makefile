# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 22:30:34 by rsaf              #+#    #+#              #
#    Updated: 2022/08/21 18:01:33 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	BANKLOG
C_FLAG	=	-Wall -Wextra
SRS		=	Account.cpp test.cpp

OBJ		=	$(SRS:.cpp=.o)

all		:	${NAME}

%.o 	:	%.cpp Account.hpp
	c++ $(C_FLAG) -c $< -o $@

$(NAME) : $(OBJ)
	c++ $(C_FLAG) $^ -o $@

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm $(NAME)

