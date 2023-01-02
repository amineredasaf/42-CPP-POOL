/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:54:24 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/02 09:21:49 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("EMPTY"), grade(0)
{
	std::cout << "Bureaucrat constructor\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) 
{
	std::cout << "Bureaucrat constructor\n";
	if (this->grade > 150)
		throw (GradeTooLowException());
	else if (this->grade < 1)
		throw (GradeTooHighException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade)
{
	std::cout << "Bureaucrat copy constructor\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->grade = obj.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor\n";
}

/************************/

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::setGrade(int Grade)
{
	this->grade = Grade;
}

/************************/

void Bureaucrat::GradeDecrementing()
{
	if ((this->grade + 1) > 150)
		throw GradeTooLowException();
	this->setGrade(this->grade++);	
}

void Bureaucrat::GradeIncrementing()
{
	if ((this->grade - 1) < 1)
		throw GradeTooHighException();
	this->setGrade(this->grade--);
}

void Bureaucrat::signForm(class Form &obj)
{
	if (obj.getSign() == true)
		std::cout << this->getName() << " signed " << obj.getName() << "\n";
	else
		std::cout << this->getName() << " couldn’t sign " << obj.getName() << " because requied grade is " << obj.getGradeSign()  << "\n";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj){
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "\n";
	return os;
}