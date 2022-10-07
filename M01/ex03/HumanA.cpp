/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:33:57 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/07 13:07:01 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon): Name(newName), WeaponName(newWeapon)
{
}

HumanA::~HumanA(void)
{
}


void HumanA::attack()
{
    std::cout << Name << " attacks with their ";
    std::cout << WeaponName.getType() << "\n";
}