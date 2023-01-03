/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:54:29 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/03 07:49:10 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
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
            Form F("F", 1, 2);
            Bureaucrat B("b" , 2);
            try {
                F.beSigned(B);
            }
            catch ( std::exception &ex){
               std::cout << ex.what() << "\n";    
            }
            B.signForm(F);
        }
        catch (std::exception &ex){
            std::cout << ex.what() << "\n";
        }
        // B.signForm(F);       
    }
    {
        Form x("Obij", 50, 2);
        std::cout << x;
    }
}