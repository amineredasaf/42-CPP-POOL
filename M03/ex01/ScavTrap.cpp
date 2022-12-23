/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 07:26:40 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/23 11:07:08 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>


ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << this->Name << "	: Constructor Called!\n";
	HitPoints = 0;
	EnergyPoint = 0;
	AttackDamge = 0;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << Name << "	: Constructor Called!\n";
	this->Name = Name;
	this->HitPoints = 100;
	this->EnergyPoint = 50;
	this->AttackDamge = 20;
}

ScavTrap::ScavTrap(const ScavTrap &Obj)
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << this->Name << "	: Copy Constructor Called!\n";
	*this = Obj;
	return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &Obj)
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << this->Name << "	: Assigament Constructor Called!\n";
	this->Name = Obj.Name;
	this->HitPoints = Obj.HitPoints;
	this->EnergyPoint = Obj.EnergyPoint;
	this->AttackDamge = Obj.AttackDamge;
	return *this;
}

ScavTrap::~ScavTrap()
{}

void ScavTrap::attack(const std::string &target)
{
	if (this->EnergyPoint > 0 && this->HitPoints > 0)
	{
		this->EnergyPoint--;
		std::cout << "ScavTrap ";
		std::cout << "-	" << this->Name << "	: Attacked " << target << " causing "<< this->AttackDamge <<" points of damage!" <<  " (E:" << this->EnergyPoint <<")\n";
	}
	else
	   std::cout << "-	" << this->Name << "	: Has No Energy/Hit Points to Attack the " << target << "!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap ";
	std::cout << "-	" << this->Name << "	:  is now in Gate\n";
}