/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 02:21:25 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/24 09:52:21 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap NEGEN("Negen");
    ClapTrap RICK("Rick");

    NEGEN.attack("Rick");
    RICK.takeDamage(NEGEN.getAttackDamge());
    RICK.attack("Negen");
    NEGEN.takeDamage(NEGEN.getAttackDamge());
    RICK.eRepaired(2);
}