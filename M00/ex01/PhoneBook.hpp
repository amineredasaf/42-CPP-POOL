/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:56:38 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/07 18:21:43 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contacts.hpp"

class PhoneBook
{
	private:
		std::string	PrompetLine;
		Contact     contacts[8];
		int idx;
	public:
		PhoneBook() { this->idx = 0; }
		std::string	DisplayPrompet();
		void    	ActionADD();
		void    	ActionSEARCH();
		void		DisplayContacts();
};

#endif