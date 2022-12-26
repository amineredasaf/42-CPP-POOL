/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:24:56 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/27 00:16:39 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <algorithm>

Animal::Animal() {}

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
}

Animal::~Animal(){ std::cout << "Animal : destructor\n"; }

std::string Animal::getType() const { return this->type; }

void Animal::makeSound() const { std::cout << "sounds of animals ever heard\n";}
