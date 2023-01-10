/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:50:15 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/10 17:33:28 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <sstream>
#include <string>

Conversion::Conversion(){}

Conversion::Conversion(const Conversion& obj){
	if (this != &obj)
		*this = obj;
	return;
}

Conversion& Conversion::operator=(const Conversion &obj){
	if (this != &obj)
	{
		this->_char = obj.getChar();
		this->_int = obj.getInt();
		this->_float = obj.getFloat();
		this->_double = obj.getDouble();
	}
	return *this;
}

Conversion::~Conversion(){}

/*********************************************************/
double	Conversion::getDouble() const { return this->_double; }
float	Conversion::getFloat() const { return this->_float; }
char	Conversion::getChar() const { return this->_char; }
int		Conversion::getInt() const { return this->_int; }

/*********************************************************/
bool	isFromAscii(char c) {
	if (c >= 0 && c <= 127)
		return true;
	return false;
};

bool	isCorrectPos(std::string inputString, char toFind, int npos)
{
	bool flag = true;
	int i = 0;
	while (inputString[i])
	{
		if (inputString[i] == toFind && i != npos)
			flag = false;
		i++;
	}
	return flag;
}

bool	isDuplicated(std::string inputString, char toFind)
{
	int	flag = 0;
	int	i = 0;

	while (inputString[i])
	{
		if (inputString[i] == toFind)
			flag++;
		i++;
	}
	if (flag > 1)
		return false;
	return true;
}

/*********************************************************/
char	Conversion::findType(std::string inputString)
{
	/* int */
	if (inputString.find_first_not_of("+-0123456789") == inputString.npos\
	&& isCorrectPos(inputString, '+', 0) && isCorrectPos(inputString, '-', 0))
	{
		fromInt(atoi(inputString.c_str()));
	}
	/* float */
	else if (inputString.find_first_not_of("+-0123456789.f") == inputString.npos\
	&& isCorrectPos(inputString, 'f', inputString.length() - 1)\
	&& inputString[inputString.length() - 1] == 'f'\
	&& isCorrectPos(inputString, '+', 0) && isCorrectPos(inputString, '-', 0)\
	&& isDuplicated(inputString, '.')\
	&& (inputString[0] != '.' && inputString[inputString.length() - 1] != '.'))
	{
		std::stringstream ss;
		ss << inputString.erase(inputString.length() - 1);
		ss >> this->_float;
		fromFloat(this->_float);
	}
	/* DOUBLE */
	else if (inputString.find_first_not_of("+-0123456789.") == inputString.npos\
	&& isDuplicated(inputString, '.')
	&& isCorrectPos(inputString, '+', 0) && isCorrectPos(inputString, '-', 0)\
	&& (inputString[0] != '.' && inputString[inputString.length() - 1] != '.'))
	{
		std::stringstream ss;
		ss << inputString;
		ss >> this->_double;
		fromDouble(this->_double);
	}
	/* Nan */
	else if (inputString == "nan" || inputString == "-inf" || inputString == "+inf")
		fromNan(inputString);
	/* Nanf */
	else if (inputString == "nanf" || inputString == "-inff" || inputString == "+inff")
		fromNanf(inputString);
	/* char */
	else if (inputString.length() == 1 && (isFromAscii(inputString[0]))){	
		fromChar(inputString[0]);
		return 0;
	}
	else {
		std::cout << "- Error : Something Wrong occr!\n";
	}
	return 'c';
}

/*********************************************************/
void	Conversion::fromChar(char inputChar)
{
	std::cout << "------- FROM CHAR --------\n";
	this->_char = inputChar; 
	if ( inputChar <= 32 || inputChar >= 127)
		std::cout << "char		: Non displayable" << "\n";
	else
		std::cout << "char		: " << this->_char << "\n";
	std::cout << "int		: " << static_cast<int>(this->_char) << "\n";
	std::cout << std::fixed;
	std::cout << "float		: " << std::setprecision(1) << static_cast<float>(this->_char) << "f\n";
	std::cout << "double		: " << std::setprecision(1) << static_cast<double>(this->_char) << "\n";
}

void	Conversion::fromInt(int inputInt)
{
	std::cout << "------- FROM INT --------\n";
	this->_int = inputInt;
	if ((inputInt <= 32) || inputInt > 126)
		std::cout << "char		: Non displayable" << "\n";
	else
		std::cout << "char		: " << static_cast<char>(this->_int) << "\n";
	std::cout << std::fixed;
	std::cout << "int		: " << this->_int << "\n";
	std::cout << "float		: " << std::setprecision(1) << static_cast<float>(this->_int) << "f\n";
	std::cout << "double		: " << std::setprecision(1) << static_cast<double>(this->_int) << "\n";
}

void	Conversion::fromFloat(float inputFloat)
{
	this->_float = inputFloat;
	std::cout << "------- FROM FLOAT --------\n";
	if ((inputFloat <= 32) || inputFloat > 126)
		std::cout << "char		: Non displayable" << "\n";
	else
		std::cout << "char		: " << static_cast<char>(this->_float) << "\n";
	std::cout << std::fixed;
	std::cout << "int		: " << static_cast<int>(this->_float) << "\n";
	std::cout << "float		: " << std::setprecision(1) << static_cast<float>(this->_float) << "f\n";
	std::cout << "double		: " << std::setprecision(1) << static_cast<double>(this->_float) << "\n";
}

void	Conversion::fromDouble(double inputDouble)
{
	this->_double = inputDouble;
	std::cout << "------- FROM DOUBLE --------\n";
	if ((inputDouble <= 32) || inputDouble > 126)
		std::cout << "char		: Non displayable" << "\n";
	else
		std::cout << "char		: " << static_cast<char>(this->_double) << "\n";
	std::cout << std::fixed;
	std::cout << "int		: " << static_cast<int>(this->_double) << "\n";
	std::cout << "float		: " << std::setprecision(1) << static_cast<float>(this->_double) << "f\n";
	std::cout << "double		: " << std::setprecision(1) << static_cast<double>(this->_double) << "\n";
}

void	Conversion::fromNan(std::string inputNan)
{
	this->_Nan = static_cast<double>(std::atof(inputNan.c_str()));
	std::cout << "------- FROM Nan --------\n";
	std::cout << "char		: Impossible" << "\n";
	std::cout << "int		: Impossible" << "\n";
	std::cout << std::fixed;
	std::cout << "float		: " << std::setprecision(1) << static_cast<float>(this->_Nan) << "f\n";
	std::cout << "double		: " << std::setprecision(1) << static_cast<double>(this->_Nan) << "\n";
}

void	Conversion::fromNanf(std::string inputNanf)
{
	this->_Nanf = std::atof(inputNanf.c_str());
	std::cout << "------- FROM Nanf --------\n";
	std::cout << "char		: Impossible" << "\n";
	std::cout << "int		: Impossible" << "\n";
	std::cout << std::fixed;
	std::cout << "float		: " << std::setprecision(1) << static_cast<float>(this->_Nanf) << "f\n";
	std::cout << "double		: " << std::setprecision(1) << static_cast<double>(this->_Nanf) << "\n";
}