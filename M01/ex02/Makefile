# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 00:00:49 by rsaf              #+#    #+#              #
#    Updated: 2022/09/14 00:03:16 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=BRAIN
CFLAG=-Wall -Wextra -Werror -std=c++98
SRS= main.cpp
OBJ=$(SRS:.cpp=.o)
all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAG) $^ -o $@
%.o:%.c
	c++ $(CFLAG) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean re