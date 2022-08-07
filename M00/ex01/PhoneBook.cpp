/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:09:45 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/07 18:24:20 by rsaf             ###   ########.fr       */
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
	return this->PrompetLine;
}

void	PhoneBook::ActionADD()
{
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSec;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << this->idx << "\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "~~Contact First Name\t\t: ";
	std::getline(std::cin, FirstName);
	std::cout << "~~Contact Last Name\t\t: ";
	std::getline(std::cin, LastName);
	std::cout << "~~Contact Nickname\t\t: ";
	std::getline(std::cin, Nickname);
	std::cout << "~~Contact Phone Number\t\t: ";
	std::getline(std::cin, PhoneNumber);
	std::cout << "~~Contact Darkest secret\t: ";
	std::getline(std::cin, DarkestSec);
	contacts[this->idx].setInfo(FirstName, LastName, Nickname, PhoneNumber, DarkestSec);
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