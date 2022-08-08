/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:09:45 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/08 20:14:21 by rsaf             ###   ########.fr       */
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
			return std::string();
	}
	return (userINPUT);
}

void	PhoneBook::changeIDX(void)
{
	if (this->idx < 8)
		this->idx++;
	else
		this->idx =  0;
}

int		PhoneBook::ActionADD(void)
{
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSec;

	FirstName = readLINE("~~Contact First Name\t\t: ");
	if (FirstName.empty())
		return 2;
	LastName = readLINE("~~Contact Last Name\t\t: ");
	if (LastName.empty())
		return 2;
	Nickname = readLINE("~~Contact Nickname\t\t: ");
	if (Nickname.empty())
		return 2;
	PhoneNumber = readLINE("~~Contact Phone Number\t\t: ");
	if (PhoneNumber.empty())
		return 2;
	DarkestSec = readLINE("~~Contact Darkest secret\t: ");
	if (DarkestSec.empty())
		return 2;
	contacts[this->idx].setInfo(FirstName, LastName, Nickname, PhoneNumber, DarkestSec);
	changeIDX();
	return (0);
}

void	PhoneBook::DisplayContacts(void)
{
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	int	x;

	x = -1;
	while (++x < this->idx)
	{
		FirstName = contacts[x].getFirstName();
		LastName = contacts[x].getLastName();
		Nickname = contacts[x].getNickname();
		std::cout << "----------------------------------------\n";
		std::cout << "|   " << x << "   |";
		if (FirstName.length() < 10)
			std::cout << FirstName << std::setw((10 - FirstName.length())) << "|";
		std::cout << std::endl;
		std::cout << "----------------------------------------\n";
	}
}

int		PhoneBook::ActionSEARCH(void)
{
	DisplayContacts();
	return (0);
}