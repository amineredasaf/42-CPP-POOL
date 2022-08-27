/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 01:45:04 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/27 05:30:44 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *forCarl;
    randomChump("rick");
    forCarl = newZombie("carl");
    forCarl->announce();
    delete forCarl;
}