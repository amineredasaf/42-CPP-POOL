/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:09:45 by rsaf              #+#    #+#             */
/*   Updated: 2022/11/08 01:10:53 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	this->idx = -1;
}

std::string PhoneBook::DisplayPrompet(void)
{
	int x;

	x = -1;
	std::cout << "+---------------+------------+-----------+\n";
	std::cout << "| Actions : ADD | " << "~2: SEARCH | " << "~3: EXIT  |\n";
	std::cout << "+---------------+------------+-----------+\n";
	std::cout << "| Choice Your Action: ";
	this->PrompetLine = "NULL";
	std::getline(std::cin, this->PrompetLine);
	// std::cin >> this->PrompetLine;
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
	if (this->idx == 7)
		this->idx =  0;
	else
		this->idx++;
}

int		PhoneBook::ActionADD(void)
{
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSec;

	changeIDX();
	std::cout << "+----------------------------------------+\n";
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
	std::cout << "+----------------------------------------+\n";
	return (0);
}

void	PhoneBook::DisplayAllContacts(void)
{
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	int	x;

	x = -1;
	while (++x <= this->idx)
	{
		FirstName = contacts[x].getFirstName();
		LastName = contacts[x].getLastName();
		Nickname = contacts[x].getNickname();
	std::cout << "+-------+----------+----------+----------+\n";
		std::cout << "|   " << x << "   |";
		if (FirstName.length() <= 10)
			std::cout << std::setw((10)) << FirstName << "|";
		else
			std::cout << FirstName.substr(0, 9) << "." << "|";
			
		if (LastName.length() <= 10)
			std::cout << std::setw(10) << LastName << "|";
		else
			std::cout << LastName.substr(0, 9) << "." << "|";
		
		if (Nickname.length() <= 10)
			std::cout << std::setw(10) << Nickname << "|";
		else
			std::cout << Nickname.substr(0, 9) << "." << "|";
		std::cout << std::endl;
	std::cout << "+-------+----------+----------+----------+\n";
	}
}

int		PhoneBook::DisplayNcontact(void)
{
	int			index = -1;
	std::string input;

	std::cout << "+----------------------------------------+\n";
	while (index < 0 || index > this->idx)
	{
		std::cout << "Entre The Contact index : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return(-2);
		if (input >= "0" && input <= "9")
			index = std::stoi(input);
		else
			std::cout << "Please Entre The Correct Input\n";
		std::cout << "idx : "<< index << "\n";
		std::cout << "this->idx : "<< this->idx<<"\n";
	}
	std::cout << "+----------------------------------------+\n";
	return (index);	
}

int		PhoneBook::ActionSEARCH(void)
{
	int	id = -1;
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNum;
	std::string	Dsec;

	DisplayAllContacts();
	id = DisplayNcontact();
	if (id >= 0 && id <= 7)
	{
	std::cout << "+----------------------------------------+\n";
		std::cout << "First Name		:	";
		std::cout << contacts[id].getFirstName() << "\n";
		std::cout << "Last Name		:	";
		std::cout << contacts[id].getLastName()<< "\n";
		std::cout << "NickName		:	";
		std::cout << contacts[id].getNickname()<< "\n";
		std::cout << "PhoneNumber		:	";
		std::cout << contacts[id].getPhoneNumber()<< "\n";
		std::cout << "A Secret		:	";
		std::cout << contacts[id].getDarkestSecret()<< "\n";
	std::cout << "+----------------------------------------+\n";
	}else
		return (2);
	return (0);
}