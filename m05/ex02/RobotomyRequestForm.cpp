/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 05:55:19 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/05 03:27:26 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <algorithm>

RobotomyRequestForm::RobotomyRequestForm() : AForm("_NOname", 72, 45)
{
	std::cout << "RobotomyRequestForm constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
	std::cout << "RobotomyRequestForm constructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj)
{
	std::cout << "RobotomyRequestForm copy constructor\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    std::cout << "Assignment opeartor\n";
    (void)obj;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor\n";
}

void RobotomyRequestForm::execute(const Bureaucrat &caller) const
{
	if (caller.getGrade() < this->getGradeSign() && this->getSign()){
        if (std::rand() % 2 == 0)
		    std::cout << this->getName() << " has been robotomized successfully 50% of the time..\n";
        else
		    std::cout << this->getName() << " has been robotomized failed.\n";
	}
	else {
		throw (GradeTooLowException());
	}
}