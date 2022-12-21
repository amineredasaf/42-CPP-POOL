/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:08:59 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/21 19:35:40 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

//***************************** constructors ***************************************************************//
// static memeber variable
const int Fixed::bits = 8;

// defautl constructor
Fixed::Fixed() : fixedPoint(0)
{
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
	*this = cpyClass;
	return;
}

// destructor
Fixed::~Fixed()
{
}



//********************************************* operators ***********************************************//

std::ostream& operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}

// copy assignment operator
Fixed& Fixed::operator=(const Fixed &objREF)
{
	this->fixedPoint = objREF.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed &objREF)
{
	Fixed	a;

	a.setRawBits(this->getRawBits() + objREF.getRawBits());
	return  a;
}

Fixed Fixed::operator-(const Fixed &objREF)
{
	Fixed	a;

	a.setRawBits(this->getRawBits() - objREF.getRawBits());
	return  a;
}

Fixed Fixed::operator*(const Fixed &objREF)
{
	Fixed res (this->toFloat() * objREF.toFloat());
	return  res;
}

Fixed Fixed::operator/(const Fixed &objREF)
{
	Fixed res (this->toFloat() / objREF.toFloat());
	return  res;
}


// prefix increment operator overloading
Fixed& Fixed::operator++(void)
{
	++this->fixedPoint;
	return  *this;
}
// postfix increment operator
Fixed Fixed::operator++(int)
{
	Fixed cpy(*this);
	this->fixedPoint++;
	return  cpy;
}

Fixed& Fixed::operator--(void)
{
	--this->fixedPoint;
	return  *this;
}
// postfix increment operator
Fixed Fixed::operator--(int)
{
	Fixed cpy(*this);
	this->fixedPoint--;
	return  cpy;
}

//********************************************* boolen ***********************************************//
bool Fixed::operator<(const Fixed &objREF)
{
	return (this->fixedPoint < objREF.fixedPoint);
}

bool Fixed::operator>(const Fixed &objREF)
{
	return (this->fixedPoint > objREF.fixedPoint);
}

bool Fixed::operator>=(const Fixed &objREF)
{
	return (this->fixedPoint >= objREF.fixedPoint);
}

bool Fixed::operator<=(const Fixed &objREF)
{
	return (this->fixedPoint <= objREF.fixedPoint);
}

bool Fixed::operator==(const Fixed &objREF)
{
	return (this->fixedPoint == objREF.fixedPoint);
}

bool Fixed::operator!=(const Fixed &objREF)
{
	return (this->fixedPoint != objREF.fixedPoint);
}



//********************************************************************************************//

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;	
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;	
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;	
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else 
		return b;	
}

//*********************************** functions *********************************************************//
int Fixed::getRawBits(void) const
{
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
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

//********************************************************************************************//