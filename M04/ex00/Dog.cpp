/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:27:58 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/27 14:47:44 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() { this->type = "Dog";}

Dog::Dog(std::string type)
{ 
    this->type = type;
    std::cout << "Dog : constructor\n"; 
}

Dog::Dog(const Dog &Dog)
{
    std::cout << "Dog : copy constructor\n";
    *this = Dog;
    return;
}

Dog& Dog::operator=(const Dog &Dog)
{
    std::cout << "Dog : copy assignment operator\n";
    this->type = Dog.getType();
    return *this;
}

Dog::~Dog(){ std::cout << "Dog : destructor\n"; }

std::string Dog::getType() const { return this->type; }

void Dog::makeSound() const { std::cout << "- hau, hau; how how\n";}