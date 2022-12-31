/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 02:21:25 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/27 11:58:24 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    
    ScavTrap RICK("RICK");
    ClapTrap CARL("CARL");
    ClapTrap NEGEN("NEGEN");

    RICK.attack("NEGEN");
    CARL.attack("NEGEN");
    NEGEN.takeDamage(RICK.getAttackDamge() + CARL.getAttackDamge());
    NEGEN.eRepaired(2);
    NEGEN.attack("Rick");
    RICK.takeDamage(NEGEN.getAttackDamge());
    RICK.guardGate();
}