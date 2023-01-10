/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 05:54:27 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/05 17:49:50 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <exception>
#include <stdexcept>
#include <string>
#include <ostream>

class Bureaucrat
{
	const std::string name;
	int grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);	
		Bureaucrat& operator=(const Bureaucrat &obj);	
		~Bureaucrat();	

		/*getters*/
		std::string getName() const;
		int getGrade() const;

		/*stters*/
		void setGrade(int Grade);

		/*increment and decrament*/
		void	GradeIncrementing();
		void	GradeDecrementing();
		void	signForm(class Form &obj);
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

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj);