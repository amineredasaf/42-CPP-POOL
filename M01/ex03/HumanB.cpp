/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:34:22 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/06 13:49:55 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName)
{
    this->Name = newName;
}

HumanB::~HumanB(void)
{
    
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    this->WeaponName = &newWeapon;
}

void HumanB::attack()
{
    if (WeaponName)
    {
        std::cout << Name << " attacks with their ";
        std::cout << WeaponName->getType() << "\n";
    }
}