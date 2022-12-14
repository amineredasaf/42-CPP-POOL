/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:54:29 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/05 19:45:55 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>
#include <stdexcept>

int main() 
{
    {
        Bureaucrat B("BIROOOOOOO", 20);
        Intern x;
        AForm *ptr;
        ptr = x.makeForm("PresidentialPardon", "OWOWOWOWOOWOWOW");
        ptr->beSigned(B);
        B.executeForm(*ptr);
    }
}