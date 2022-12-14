/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:27:52 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/27 17:03:30 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() { this->type = "Cat";}

Cat::Cat(std::string type)
{ 
    this->type = type;
    std::cout << "Cat : constructor\n"; 
}

Cat::Cat(const Cat &Cat)
{
    std::cout << "Cat : copy constructor\n";
    *this = Cat;
    return;
}

Cat& Cat::operator=(const Cat &Cat)
{
    std::cout << "Cat : copy assignment operator\n";
    this->type = Cat.getType();
    return *this;
}

Cat::~Cat(){ std::cout << "Cat : destructor\n"; }

std::string Cat::getType() const { return this->type; }

void Cat::makeSound() const { std::cout << "- miaow miaow miaow\n";}