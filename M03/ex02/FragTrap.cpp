/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 10:14:14 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/24 20:40:14 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->getName() << "	: Constructor Called!\n";
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamge(30);
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "FragTrap ";
	std::cout << "-	" << Name << "	: Constructor Called!\n";
	this->setName(Name);
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setAttackDamge(30);
}

FragTrap::FragTrap(const FragTrap &Obj)
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->getName() << "	: Copy Constructor Called!\n";
	*this = Obj;
	return;
}

FragTrap& FragTrap::operator=(const FragTrap &Obj)
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->getName() << "	: Assigament Constructor Called!\n";
	this->setName(Obj.getName());
	this->setHitPoint(Obj.getHitPoint());
	this->setEnergyPoint(Obj.getEnergyPoint());
	this->setAttackDamge(Obj.getAttackDamge());
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->getName() << "	: Destructor Called!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->getName() << "	: Gimme five! Up here!\n";
}