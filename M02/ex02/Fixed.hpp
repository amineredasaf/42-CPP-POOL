/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:09:05 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/18 08:21:58 by rsaf             ###   ########.fr       */
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
		Fixed operator+(const Fixed &objREF);
		Fixed operator-(const Fixed &objREF);
		Fixed operator*(const Fixed &objREF);
		Fixed operator/(const Fixed &objREF);
		Fixed operator++(int);
		Fixed& operator++(void);
		Fixed operator--(int);
		Fixed& operator--(void);

		bool operator<(const Fixed &objREF);
		bool operator>(const Fixed &objREF);
		bool operator>=(const Fixed &objREF);
		bool operator<=(const Fixed &objREF);
		bool operator==(const Fixed &objREF);
		bool operator!=(const Fixed &objREF);
	
		static Fixed& min(Fixed &a, Fixed &b);
		const static Fixed& min(const Fixed &a,const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		const static Fixed& max(const Fixed &a,const Fixed &b);
		~Fixed();
	
		int     getRawBits( void ) const;
		int		toInt( void ) const;
		void    setRawBits( int const raw );
		float	toFloat( void ) const;
};
std::ostream& operator<<(std::ostream &os, const Fixed &obj);