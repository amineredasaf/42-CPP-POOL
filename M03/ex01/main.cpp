/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 02:21:25 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/23 08:29:14 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    
    ScavTrap OBJ0("SAF");
    ClapTrap OBJ1("Reda");
    ClapTrap OBJ2("Amine");

    OBJ0.attack("REDA");
    OBJ1.attack("Amine");
    OBJ2.takeDamage(4);
    OBJ2.eRepaired(2);
}