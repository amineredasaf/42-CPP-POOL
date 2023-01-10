/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:51:39 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/05 16:26:21 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("_NOname", 25, 5)
{
	std::cout << "PresidentialPardonForm constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)  : AForm(target, 25, 5)
{
	std::cout << "PresidentialPardonForm constructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj)
{
	std::cout << "PresidentialPardonForm Copy constructor\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    std::cout << "Assignment opeartor\n";
    (void)obj;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor\n";
}

void PresidentialPardonForm::execute(const Bureaucrat &caller) const
{
	    if (caller.getGrade() < this->getGradeSign() && this->getSign()){
			std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox.\n";
		}
		else {
			throw (GradeTooLowException());
		}
}