/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 08:09:05 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/05 02:44:49 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstddef>
#include <stdexcept>

Intern::Intern() { 	std::cout << "Intern constructor\n"; };

Intern::Intern(const Intern& obj)
{ 
    std::cout << "Intern copy constructor\n"; 
    *this = obj;
    return;
};

Intern& Intern::operator=(const Intern& obj) {
    std::cout << "Intern Assignment opeartor\n";
    (void)obj;
    return *this;
};

Intern::~Intern(){ 	std::cout << "Intern destructor\n"; };

AForm* Intern::makeForm(std::string name, std::string target)
{
    int x = -1;
    std::string list[] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
    for (int i = 0; i < 3; i++){
        if (name == list[i])
            x = i;
    }
    if (x == -1)
        throw (std::runtime_error("Error Occur\n"));
    std::cout << "- Intern creates " << name << "\n";
    switch (x) {
        case 0:
            return (new PresidentialPardonForm(target));
        case 1:
            return (new RobotomyRequestForm(target));
        case 2:
            return (new ShrubberyCreationForm(target));
        default:
            std::cout << "- Something Wrong Please insert the correct Target\n";
    }
    return NULL;
}