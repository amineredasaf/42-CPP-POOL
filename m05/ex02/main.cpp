/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:54:29 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/03 10:51:29 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main() 
{
    // {
    //     /* Low Grade */
    //     try {
    //         Bureaucrat obj("King", 150);
    //         obj.GradeDecrementing();
    //     }
    //     catch (std::exception &ex){
    //         std::cout << ex.what();
    //     }
    // }
    // {
    //     /* high Grade */
    //     try {
    //         Bureaucrat obj("King", 1);
    //         obj.GradeIncrementing();
    //     }
    //     catch (std::exception &ex){
    //         std::cout << ex.what();
    //     }
    // }
    // {
    //     /* testing << overloading */
    //     Bureaucrat ob("wmwmwmwmw", 44);
    //     std::cout << ob;
    // }
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
        // B.signAForm(F);       
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
        // B.signAForm(F);       
    }
    {
        AForm *x = new ShrubberyCreationForm("x");
        std::cout << *x;
    }
}