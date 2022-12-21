/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:10:08 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/17 01:42:40 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// static memeber variable
const int Fixed::bits = 8;

// defautl constructor
Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

// copy constructor
Fixed::Fixed(Fixed &cpyClass)
{
	std::cout << "Copy constructor called\n";
	*this = cpyClass;
	return;
}

// copy assignment operator
Fixed& Fixed::operator=(Fixed &objREF)
{
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = objREF.getRawBits();
	return *this;
}

// destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->fixedPoint = raw;
}