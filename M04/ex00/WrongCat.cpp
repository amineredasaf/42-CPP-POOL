/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:58:00 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/31 03:33:43 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() { this->type = "WrongCat";  std::cout << "WrongCat : Default constructor\n";}

WrongCat::WrongCat(std::string type)
{ 
    this->type = type;
    std::cout << "WrongCat : constructor\n"; 
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
    std::cout << "WrongCat : copy constructor\n";
    *this = WrongCat;
    return;
}

WrongCat& WrongCat::operator=(const WrongCat &WrongCat)
{
    std::cout << "WrongCat : copy assignment operator\n";
    this->type = WrongCat.getType();
    return *this;
}

WrongCat::~WrongCat(){ std::cout << "WrongCat : destructor\n"; }

std::string WrongCat::getType() const { return this->type; }

void WrongCat::makeSound() const { std::cout << "- Im A cat Haw Haw\n";}