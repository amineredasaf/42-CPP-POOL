/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:40:35 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/08 23:09:22 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip> // std::setprecision

class Conversion {
	private:
		char		_char;
		int			_int;
		double		_double;
		float		_float;
		float		_Nanf;
		double		_Nan;

	public:
		Conversion();
		Conversion(const Conversion &obj);
		Conversion& operator=(const Conversion& obj);
		~Conversion();
		
		char	getChar() const;
		int		getInt() const;
		double	getDouble() const;
		float	getFloat() const;

		char	findType(std::string inputString);

		void	fromChar(char inputChar);
		void	fromInt(int inputInt);
		void	fromFloat(float inputFloat);
		void	fromDouble(double inputDouble);
		void	fromNan(std::string inputNan);
		void	fromNanf(std::string inputNanf);
};