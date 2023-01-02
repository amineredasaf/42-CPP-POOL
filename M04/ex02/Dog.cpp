/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:27:58 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/01 23:29:59 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog() : mind(new Brain()) { 	std::cout << "Dog : constructor\n"; this->type = "Dog";}

Dog::Dog(std::string type) : mind(new Brain())
{ 
	this->type = type;
	std::cout << "Dog : constructor\n"; 
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog : copy constructor\n";
	this->type = dog.getType();
	this->mind =  NULL;
	this->operator=(dog);
	return;
}

Dog& Dog::operator=(const Dog &dog)
{
	std::cout << "Dog : copy assignment operator\n";
	this->type = dog.getType();
	if (this->mind != NULL)
		delete this->mind;
	this->mind =  new Brain(*dog.mind); // deep copy
	// mind = dog.mind; // shallow copy
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog : destructor\n";
	if (mind) delete mind;
}

std::string Dog::getType() const { return this->type; }

void Dog::makeSound() const { std::cout << "- hau, hau; how how\n";}