/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:12:59 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/08 19:21:16 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	int         code;
	std::string ArgumentLine;
	// Contact     MyContact;
	PhoneBook app;
	while (1)
	{
			ArgumentLine = app.DisplayPrompet();
			if (ArgumentLine == "exit")
				break;
			else if (!ArgumentLine.compare("add"))
				code = app.ActionADD();
			if (code == 2)
				break;
	}
	// MyContact.setInfo("Amine", "Saf", "rsaf", "06486800", "IlovePototo");
	// std::cout << MyContact.getFirstName() << std::endl;
}
