/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 02:21:20 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/23 11:21:41 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>



/*******************************************************/
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap ";
	std::cout << "-	" << this->Name << "	: Constructor Called!\n";
	HitPoints = 0;
	EnergyPoint = 0;
	AttackDamge = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "ClapTrap ";
	std::cout << "-	" << Name << "	: Constructor Called!\n";
	this->Name = Name;
	this->HitPoints = 10;
	this->EnergyPoint = 10;
	this->AttackDamge = 0;
}

ClapTrap::ClapTrap(const ClapTrap &Obj)
{
	std::cout << "ClapTrap ";
	std::cout << "-	" << this->Name << "	: Copy Constructor Called!\n";
	*this = Obj;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &Obj)
{
	std::cout << "ClapTrap ";	
	std::cout << "-	" << this->Name << "	: Assigament Constructor Called!\n";
	this->Name = Obj.Name;
	this->HitPoints = Obj.HitPoints;
	this->EnergyPoint = Obj.EnergyPoint;
	this->AttackDamge = Obj.AttackDamge;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap ";
	std::cout << "-	" << this->Name << "	: Destructor Called!\n";
}
/*******************************************************/
/*******************************************************/
void    ClapTrap::attack(const std::string &target)
{
	if (this->EnergyPoint > 0 && this->HitPoints > 0)
	{
		this->EnergyPoint--;
		std::cout << "ClapTrap ";
		std::cout << "-	" << this->Name << "	: Attacked " << target << " causing "<< this->AttackDamge <<" points of damage!" <<  " (E:" << this->EnergyPoint <<")\n";
	}
	else
	   std::cout << "-	" << this->Name << "	: Has No Energy/Hit Points to Attack the " << target << "!\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints > 0)
	{
		this->HitPoints -= amount;
		std::cout << "ClapTrap ";
		std::cout <<"-	" << this->Name << "	: Take " << amount << " of DAMEGEEE!\n";
	}
	else {
		std::cout << "-	" << this->Name << "	: Enough is Enough!!!\n";
	}
}

void    ClapTrap::eRepaired(unsigned int amount)
{
	if (amount <= 10 && amount >= 0)
	{
		this->HitPoints += amount;
		this->EnergyPoint--;
		std::cout << "ClapTrap ";
		std::cout << "-	" << this->Name << "	: Repaired with " << amount << " of HitPoints!" <<  " (E:" << this->EnergyPoint <<")\n";
	}
	else {
		std::cout << "-	" << this->Name << "	: Can't Repaired with that amount!!!\n";
	}
}
/*******************************************************/
/*****************************Getters**************************/

std::string	ClapTrap::getName() 		{return this->Name;}
int			ClapTrap::getHitPoint()		{return this->HitPoints;}
int			ClapTrap::getEnergyPoint()	{return this->EnergyPoint;}
int			ClapTrap::getAttackDamge()	{return this->AttackDamge;}

/*******************************************************/
/**************************Setters*****************************/

void ClapTrap::setName(std::string Name) { this->Name = Name; }
void ClapTrap::setHitPoint(int HP) { this->HitPoints = HP; }
void ClapTrap::setEnergyPoint(int EP) { this->EnergyPoint = EP; }
void ClapTrap::setAttackDamge(int AD) { this->AttackDamge = AD; }