# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 11:43:45 by rsaf              #+#    #+#              #
#    Updated: 2022/10/13 21:13:08 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Harl20
CFLAGS= -Wall -Werror -Wextra -std=c++98
SRS=main.cpp Harl.cpp
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