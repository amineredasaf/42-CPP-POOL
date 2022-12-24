/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 10:14:14 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/24 10:36:44 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->Name << "	: Constructor Called!\n";
	HitPoints = 100;
	EnergyPoint = 100;
	AttackDamge = 30;
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "FragTrap ";
	std::cout << "-	" << Name << "	: Constructor Called!\n";
	this->Name = Name;
	this->HitPoints = 100;
	this->EnergyPoint = 100;
	this->AttackDamge = 30;
}

FragTrap::FragTrap(const FragTrap &Obj)
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->Name << "	: Copy Constructor Called!\n";
	*this = Obj;
	return;
}

FragTrap& FragTrap::operator=(const FragTrap &Obj)
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->Name << "	: Assigament Constructor Called!\n";
	this->Name = Obj.Name;
	this->HitPoints = Obj.HitPoints;
	this->EnergyPoint = Obj.EnergyPoint;
	this->AttackDamge = Obj.AttackDamge;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->Name << "	: Destructor Called!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap ";
	std::cout << "-	" << this->Name << "	: Gimme five! Up here!\n";
}