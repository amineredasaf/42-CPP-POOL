/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:54:29 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/05 14:44:18 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

int main() 
{
    {
        try {
            /* Create Form Object and init inherited members*/
            Form F("Forrrrrrr", 4, 2);
            /* Create Bure.. Object*/
            Bureaucrat B("biroooooooo" , 3);
            try {
                /* biro need to sign the form */
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