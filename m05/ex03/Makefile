# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 05:54:31 by rsaf              #+#    #+#              #
#    Updated: 2023/01/05 19:39:03 by rsaf             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 NAME=program
 CPPF=-Wall -Wextra -Werror -std=c++98
 
 SRS= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
 		PresidentialPardonForm.cpp Intern.cpp \
		RobotomyRequestForm.cpp \

 INC=Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp Intern.hpp \
	RobotomyRequestForm.hpp
 
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
re: fclean $(NAME)