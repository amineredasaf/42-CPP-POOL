/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:43:28 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/13 21:43:54 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\n";
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << "\n";
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << "\n";   
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";    
}

void Harl::complain( std::string level)
{
    std::cout << "" << "\n";
}

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}