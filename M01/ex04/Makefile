# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 22:41:44 by rsaf              #+#    #+#              #
#    Updated: 2022/10/13 10:06:05 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Sedisforlosers
CFLAGS= -Wall -Werror -Wextra -std=c++98
SRS=main.cpp
OBJ=$(SRS:.cpp=.o)
%.o:.%c $(INC)
	c++ $(CFLAGS) -c $< -o $@
all: $(NAME)
$(NAME):$(OBJ)
	c++ $(CFLAGS) $^ -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all