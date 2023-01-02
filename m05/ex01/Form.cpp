/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 08:02:49 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/02 08:49:48 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("EMPTY"), gradeSign(0), gradeExe(0)
{
	std::cout << "Form constructor\n";
}

Form::Form(std::string name, int gradeSign, int gradeExe) : name(name), gradeSign(gradeSign), gradeExe(gradeExe)
{
	std::cout << "Form constructor\n";
	this->sign = false;
	if (this->gradeSign > 150)
		throw (GradeTooLowException());
	else if (this->gradeSign < 1)
		throw (GradeTooHighException());
}

Form::Form(const Form &obj) : name(obj.name), gradeSign(obj.gradeSign), gradeExe(obj.gradeExe)
{
	this->sign = obj.sign;
	std::cout << "Form copy constructor\n";
	return;
}

Form& Form::operator=(const Form &obj)
{
	this->sign = obj.sign;
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor\n";
}
/************************/
		/*getters*/
std::string Form::getName() const { return this->name;};
int Form::getGradeExe() const { return this->gradeExe;};
int Form::getGradeSign() const { return this->gradeSign;};
bool Form::getSign() const { return this->sign; };

/************************/
		/*stters*/
void Form::setSign(bool sign) { this->sign = sign; };
void Form::beSigned(class Bureaucrat obj)
{
	if (obj.getGrade() <= this->getGradeSign())
		this->sign = true;
	else
		throw GradeTooLowException();
}