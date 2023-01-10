/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:54:29 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/05 17:40:14 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main() 
{
    {
        try{
            Bureaucrat B("BIROOOOOOOO", 142);
            AForm *AF = new ShrubberyCreationForm("Shuuuuuuuuuuuu");
            AF->beSigned(B);
            B.executeForm(*AF);
            delete AF;
        }
        catch (...) {
            /* exception handled in exeForm */
        }
    }
    {
        try {
            AForm *ptr = new ShrubberyCreationForm("SAMA");
            Bureaucrat B("b" , 144);
            ptr->beSigned(B);
            ptr->execute(B);
            try {
                ptr->beSigned(B);
            }
            catch ( std::exception &ex){
               std::cout << ex.what() << "\n";    
            }
            B.signForm(*ptr);
            delete ptr;
        }
        catch (std::exception &ex){
            std::cout << ex.what() << "\n";
        }
    }
    {
        try {
            AForm *ptr = new PresidentialPardonForm("wmwmwmwmwmmw");
            Bureaucrat B("b" , 10);
            ptr->beSigned(B);
            ptr->execute(B);
            try {
                ptr->beSigned(B);
            }
            catch ( std::exception &ex){
               std::cout << ex.what() << "\n";    
            }
            B.signForm(*ptr);
            delete ptr;
        } 
        catch (std::exception &ex){
            std::cout << ex.what() << "\n";
        }     
    }
    {
        try {
            AForm *ptr = new RobotomyRequestForm("ODODODODODOODDO");
            Bureaucrat B("b" , 10);
            ptr->beSigned(B);
            ptr->execute(B);
            try {
                ptr->beSigned(B);
            }
            catch ( std::exception &ex){
               std::cout << ex.what() << "\n";    
            }
            B.signForm(*ptr);
            delete ptr;
        } 
        catch (std::exception &ex){
            std::cout << ex.what() << "\n";
        }     
    }
    {
        AForm *x = new ShrubberyCreationForm("x");
        std::cout << *x;
    }
}