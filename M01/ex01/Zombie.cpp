/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 05:41:28 by rsaf              #+#    #+#             */
/*   Updated: 2022/09/07 15:56:00 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie( void )
{
    std::cout << this->name;
    std::cout << " : Horde is dead\n";
}

void Zombie::setter(std::string name)
{
    if (name == "")
        return;
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << this->name;
    std::cout << " : Moar brainz!\n";
}