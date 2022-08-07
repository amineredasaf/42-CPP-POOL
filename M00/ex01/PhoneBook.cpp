/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:09:45 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/07 20:23:22 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::DisplayPrompet(void)
{
	int x;

	x = -1;
	std::cout << "~~~~~~~~~\n";
	std::cout << "~1: ADD\n";
	std::cout << "~2: SEARCH\n";
	std::cout << "~3: EXIT\n";
	std::cout << "~~~~~~~~~\n";
	std::cout << "~Choice Your Action: ";
	std::getline(std::cin, this->PrompetLine);
	if (std::cin.eof())
		return("exit");
	return this->PrompetLine;
}

std::string	PhoneBook::readLINE(std::string message)
{
	std::string userINPUT;

	while (userINPUT.empty())
	{
		std::cout << message;
		std::getline(std::cin, userINPUT);
		if (std::cin.eof())
			return NULL;
	}
	return (userINPUT);
}

void	PhoneBook::ActionADD()
{
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSec;

	FirstName = readLINE("~~Contact First Name\t\t: ");
	LastName = readLINE("~~Contact Last Name\t\t: ");
	Nickname = readLINE("~~Contact Nickname\t\t: ");
	PhoneNumber = readLINE("~~Contact Phone Number\t\t: ");
	DarkestSec = readLINE("~~Contact Darkest secret\t: ");
	// contacts[this->idx].setInfo(FirstName, LastName, Nickname, PhoneNumber, DarkestSec);
	if (this->idx < 8)
		this->idx++;
	else
		this->idx =  0;
}



// void	PhoneBook::ActionSEARCH(int idx)
// {
// 	int	x;

// 	x = 0;
// 	DisplayContacts();
// 	contacts[idx].setInfo(FirstName, LastName, Nickname, PhoneNumber, DarkestSec);
// }