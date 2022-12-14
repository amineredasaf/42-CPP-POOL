/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:24:56 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/27 14:44:36 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() { this->type = "species"; std::cout << "Animal : Default constructor\n";}

Animal::Animal(std::string type) : type(type) { std::cout << "Animal : constructor\n"; }

Animal::Animal(const Animal &Animal)
{
    std::cout << "Animal : copy constructor\n";
    *this = Animal;
    return;
}

Animal& Animal::operator=(const Animal &Animal)
{
    std::cout << "Animal : copy assignment operator\n";
    this->type = Animal.getType();
    return *this;
}

Animal::~Animal(){ std::cout << "Animal : destructor\n"; }

std::string Animal::getType() const { return this->type; }

void Animal::makeSound() const { std::cout << "- sounds of animals ever heard\n";}
