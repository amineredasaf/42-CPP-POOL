/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 01:45:31 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/27 05:31:57 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " :";
    std::cout << " YGH IM DEAD\n";
}

void Zombie::announce()
{
    std::cout << this->name << " :";
    std::cout << " BraiiiiiiinnnzzzZ...\n";
}