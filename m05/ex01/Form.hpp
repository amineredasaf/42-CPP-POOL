/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 08:02:47 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/02 08:47:44 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Form{
    private:
        const std::string name;
        const int gradeSign;
        const int gradeExe;
        bool sign;
    public:
        Form();
		Form(std::string name, int gradeSign, int gradeExe);
		Form(const Form &obj);
		Form& operator=(const Form &obj);
		~Form();

        /*getters*/
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExe() const;
        bool getSign() const;

		/*stters*/
        void setSign(bool Sign);
        void beSigned(class Bureaucrat obj);
		/*Exception Handling*/
		// class GradeTooHighException : public std::runtime_error {
		class GradeTooHighException : public std::exception {
			public:
				// GradeTooHighException(): runtime_error("-* Grade Too High *-") {};
				const char* what() const throw(){ return ("-* Grade Too High *-\n");};
		};
		// class	GradeTooLowException : public std::runtime_error{
		class	GradeTooLowException : public std::exception{
			public:
				// GradeTooLowException() : runtime_error("-* Grade Too Low *-") {};
				const char* what() const throw(){ return ("-* Grade Too Low *-\n");};
				
		};
};