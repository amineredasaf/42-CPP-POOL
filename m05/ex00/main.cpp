/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:54:29 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/02 09:00:32 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
    {
        /* Low Grade */
        try {
            Bureaucrat obj("King", 170);
            obj.GradeDecrementing();
        }
        catch (std::exception &ex){
            std::cout << ex.what();
        }
    }
    {
        /* high Grade */
        try {
            Bureaucrat obj("King", -2);
            obj.GradeIncrementing();
        }
        catch (std::exception &ex){
            std::cout << ex.what();
        }
    }
    {
        Bureaucrat ob("wmwmwmwmw", 50);
        std::cout << ob;
    }
    return 0;
}