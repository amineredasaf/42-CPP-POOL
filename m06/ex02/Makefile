# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 19:58:33 by rsaf              #+#    #+#              #
#    Updated: 2023/01/12 01:13:27 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=program
SRS=main.cpp
OBJ=$(SRS:.cpp=.o)
CPPF=-Wall -Wextra -Werror -std=c++98
all: $(NAME)

%.o:%.cpp Base.hpp A.hpp B.hpp C.hpp
	c++ $(CPPF) -c $< -o $@
$(NAME): $(OBJ)
	C++ $(CPPF) $^ -o $@
ASM:
	g++ -S $(SRS) -o ASMcode
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)