/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:12:59 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/08 19:45:49 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	int         code;
	std::string ArgumentLine;
	PhoneBook app;
	while (1)
	{
			ArgumentLine = app.DisplayPrompet();
			if (ArgumentLine == "exit" || ArgumentLine == "EXIT")
				break;
			else if (ArgumentLine == "add" || ArgumentLine == "ADD")
				code = app.ActionADD();
			else if (ArgumentLine == "SEARCH" || ArgumentLine == "search")
				code = app.ActionSEARCH();
			else
				std::cout << "\n---------------\nWRONG CHOICE : PLEASE ENTRE THE RIGHT ONE\n--------------------\n";
			if (code == 2)
				break;
	}
}
