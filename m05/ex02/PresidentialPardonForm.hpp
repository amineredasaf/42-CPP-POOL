/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:51:42 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/03 10:03:54 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
class PresidentialPardonForm : public AForm{
  public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& obj);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & caller) const;
};