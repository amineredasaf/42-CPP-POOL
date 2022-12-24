/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 02:21:25 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/24 10:43:58 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    
    ScavTrap RICK("RICK");
    ClapTrap CARL("CARL");
    ClapTrap NEGEN("NEGEN");
    FragTrap BETA("BETA");

    RICK.attack("NEGEN");
    CARL.attack("NEGEN");
    NEGEN.takeDamage(RICK.getAttackDamge() + CARL.getAttackDamge());
    NEGEN.eRepaired(2);
    NEGEN.attack("Rick");
    RICK.takeDamage(NEGEN.getAttackDamge());
    BETA.attack("Rick");
    RICK.takeDamage(BETA.getAttackDamge());
    BETA.highFivesGuys();
    RICK.attack("Beta");
    BETA.takeDamage(RICK.getAttackDamge());
}