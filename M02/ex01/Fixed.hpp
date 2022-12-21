/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 01:41:05 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/15 19:53:03 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <math.h>

class Fixed
{
private:
	int     fixedPoint;
	static const int bits;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &cpyClass);
	Fixed& operator=(const Fixed &objREF);
	~Fixed();

	int     getRawBits( void ) const;
	void    setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};
std::ostream& operator<<(std::ostream &os, const Fixed &obj);
