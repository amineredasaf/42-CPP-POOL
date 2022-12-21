/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 01:41:02 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/15 20:06:53 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

// static memeber variable
const int Fixed::bits = 8;

// defautl constructor
Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value)
{
	this->fixedPoint = value << this->bits;
}

Fixed::Fixed(const float value)
{
	this->fixedPoint = roundf(value * (1 << this->bits));
}


// copy constructor
Fixed::Fixed(const Fixed &cpyClass)
{
	std::cout << "Copy constructor called\n";
	*this = cpyClass;
	return;
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}

// copy assignment operator
Fixed& Fixed::operator=(const Fixed &objREF)
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

float Fixed::toFloat(void) const
{
	float x;
	x = (float)this->fixedPoint / (1 << this->bits);
	return x;
}

int	Fixed::toInt( void ) const
{
	int	x;
	x = this->fixedPoint >> this->bits;
	return x;
}