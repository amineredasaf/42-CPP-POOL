/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:54:29 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/04 11:46:14 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>
#include <stdexcept>

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
        try{
            Bureaucrat B("BOOS", 24);
            AForm *ptr;
            Intern x;
            ptr = x.makeForm("PresidentialPardon", "1337");
            ptr->beSigned(B);
            ptr->execute(B);
        }
        catch (...) {
            std::cout << "e.what()" << "\n";
        }
        // catch (std::runtime_error &e) {
        //     std::cout << e.what() << "\n";
        // }
    }


    // {
    //     try{
    //         Bureaucrat B("BIROOOOOOOO", 142);
    //         AForm *AF = new ShrubberyCreationForm("Shuuuuuuuuuuuu");
    //         AF->beSigned(B);
    //         B.executeForm(*AF);
    //     }
    //     catch (...) {
            
    //     }
    // }
    // {
    //     try {
    //         AForm *ptr = new ShrubberyCreationForm("SAMA");
    //         Bureaucrat B("b" , 144);
    //         ptr->beSigned(B);
    //         ptr->execute(B);
    //         try {
    //             ptr->beSigned(B);
    //         }
    //         catch ( std::exception &ex){
    //            std::cout << ex.what() << "\n";    
    //         }
    //         B.signForm(*ptr);
    //         delete ptr;
    //     }
    //     catch (std::exception &ex){
    //         std::cout << ex.what() << "\n";
    //     }
    //     // B.signAForm(F);       
    // }
    // {
    //     try {
    //         AForm *ptr = new PresidentialPardonForm("wmwmwmwmwmmw");
    //         Bureaucrat B("b" , 10);
    //         ptr->beSigned(B);
    //         ptr->execute(B);
    //         try {
    //             ptr->beSigned(B);
    //         }
    //         catch ( std::exception &ex){
    //            std::cout << ex.what() << "\n";    
    //         }
    //         B.signForm(*ptr);
    //         delete ptr;
    //     }
    //     catch (std::exception &ex){
    //         std::cout << ex.what() << "\n";
    //     }
    //     // B.signAForm(F);       
    // }
    // {
    //     AForm *x = new ShrubberyCreationForm("x");
    //     std::cout << *x;
    // }
}