/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:27:52 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/28 22:07:07 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : mind(new Brain())
{
    std::cout << "Cat : constructor\n";
    this->type = "Cat";
}

Cat::Cat(std::string type) : mind(new Brain())
{ 
    this->type = type;
    std::cout << "Cat : constructor\n"; 
}

Cat::Cat(const Cat &Cat)
{
	std::cout << "Cat : copy constructor\n";
	this->mind = new Brain;
	this->operator=(Cat);
	return;
}

Cat& Cat::operator=(const Cat &Cat)
{
	std::cout << "Cat : copy assignment operator\n";
	this->type = Cat.getType();
	if (this->mind != NULL)
		delete this->mind;
	this->mind = new Brain(*Cat.mind);
	return *this;
}

Cat::~Cat(){
    std::cout << "Cat : destructor\n";
    if (mind) delete mind;
}


std::string Cat::getType() const { return this->type; }

void Cat::makeSound() const { std::cout << "- miaow miaow miaow\n";}