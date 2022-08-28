/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 05:41:33 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/28 04:24:58 by rsaf             ###   ########.fr       */
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
    for (int x = 0; x < 3; x++)
    {
        delete [] Walkers;
    }
    return (0);
}