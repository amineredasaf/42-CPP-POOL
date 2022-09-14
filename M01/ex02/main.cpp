/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:00:47 by rsaf              #+#    #+#             */
/*   Updated: 2022/09/14 00:13:22 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	
	std::cout << "-	The String :	" << brain << "\n";
	std::cout << "-	The Address:	" << &brain <<"\n";
	std::cout << "-	The memory address of the string variable." << "\n";
	std::cout << "-	PTR :	" << stringPTR << "\n";
	std::cout << "-	REF :	" << &stringREF << "\n";
	std::cout << "-	The value of the string variable." << "\n";
	std::cout << "-	PTR :	" << *stringPTR << "\n";
	std::cout << "-	REF :	" << stringREF << "\n";
}