/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 08:02:49 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/03 05:29:53 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("EMPTY"), gradeSign(0), gradeExe(0)
{
	std::cout << "AForm constructor\n";
}

AForm::AForm(std::string name, int gradeSign, int gradeExe) : name(name), gradeSign(gradeSign), gradeExe(gradeExe)
{
	std::cout << "AForm constructor\n";
	this->sign = false;
	if (this->gradeSign > 150)
		throw (GradeTooLowException());
	else if (this->gradeSign < 1)
		throw (GradeTooHighException());
}

AForm::AForm(const AForm &obj) : name(obj.name), gradeSign(obj.gradeSign), gradeExe(obj.gradeExe)
{
	this->sign = obj.sign;
	std::cout << "AForm copy constructor\n";
	return;
}

AForm& AForm::operator=(const AForm &obj)
{
	this->sign = obj.sign;
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm destructor\n";
}
/************************/
		/*getters*/
std::string AForm::getName() const { return this->name;};
int AForm::getGradeExe() const { return this->gradeExe;};
int AForm::getGradeSign() const { return this->gradeSign;};
bool AForm::getSign() const { return this->sign; };

/************************/
		/*stters*/
void AForm::setSign(bool sign) { this->sign = sign; };
void AForm::beSigned(class Bureaucrat obj)
{
	if (obj.getGrade() <= this->getGradeSign())
		this->sign = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& obj){
	os << obj.getName() << ", AForm sign grade " << obj.getGradeSign() << ", And grade exe " << obj.getGradeExe() << "\n";
	return os;
}