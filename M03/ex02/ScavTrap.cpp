/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 07:26:40 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/24 20:37:50 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>


ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << this->getName() << "	: Constructor Called!\n";
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamge(20);
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << Name << "	: Constructor Called!\n";
	this->setName(Name);
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamge(20);
}

ScavTrap::ScavTrap(const ScavTrap &Obj)
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << this->getName() << "	: Copy Constructor Called!\n";
	*this = Obj;
	return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &Obj)
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << this->getName() << "	: Assigament Constructor Called!\n";
	this->setName(Obj.getName());
	this->setHitPoint(Obj.getHitPoint());
	this->setEnergyPoint(Obj.getEnergyPoint());
	this->setAttackDamge(Obj.getAttackDamge());
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << this->getName() << "	: Destructor Called!\n";
}

void ScavTrap::attack(const std::string &target)
{
	if (this->getEnergyPoint() > 0 && this->getHitPoint() > 0)
	{
		this->getEnergyPoint( );
		std::cout << "ScavTrap ";
		std::cout << "-	" << this->getName() << "	: Attacked " << target << " causing "<< this->getAttackDamge() <<" points of damage!" <<  " (E:" << this->getEnergyPoint() <<")\n";
	}
	else
	   std::cout << "-	" << this->getName() << "	: Has No Energy/Hit Points to Attack the " << target << "!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << this->getName() << "	: Is now in Gate keeper mode.\n";
}