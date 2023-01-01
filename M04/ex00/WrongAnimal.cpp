/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:57:56 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/31 03:33:21 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { this->type = "Alians";  std::cout << "WrongAnimal : Default constructor\n";}

WrongAnimal::WrongAnimal(std::string type) : type(type) { std::cout << "WrongAnimal : constructor\n"; }

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal : copy constructor\n";
    *this = WrongAnimal;
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal : copy assignment operator\n";
    this->type = WrongAnimal.getType();
    return *this;
}

WrongAnimal::~WrongAnimal(){ std::cout << "WrongAnimal : destructor\n"; }

std::string WrongAnimal::getType() const { return this->type; }

void WrongAnimal::makeSound() const { std::cout << "- sounds of WrongAnimals ever heard\n";}
