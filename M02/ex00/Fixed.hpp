/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:01:46 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/17 01:42:36 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
	int     fixedPoint;
	static const int bits;
public:
	Fixed();
	Fixed(Fixed &cpyClass);
	Fixed& operator=(Fixed &objREF);
	~Fixed();

	int     getRawBits( void ) const;
	void    setRawBits( int const raw );
};
