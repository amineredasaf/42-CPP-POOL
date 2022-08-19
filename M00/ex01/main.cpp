/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:12:59 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/19 17:25:55 by rsaf             ###   ########.fr       */
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
		if (code == 2)
			break;
	}
}
