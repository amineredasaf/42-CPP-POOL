/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 05:41:33 by rsaf              #+#    #+#             */
/*   Updated: 2022/09/07 17:32:15 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Walkers;
    Walkers = zombieHorde(3, "JODITH");
    for (int x = 0; x < 3; x++)
    {
        Walkers->announce();
    }
    delete[] Walkers;
    return (0);
}