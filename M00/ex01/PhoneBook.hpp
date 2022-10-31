/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:56:38 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/31 22:26:33 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contacts.hpp"

struct PhoneBook
{
	private:
		std::string	PrompetLine;
		Contact     contacts[8];
		int idx;
	public:
		PhoneBook();
		std::string	DisplayPrompet();
		std::string	readLINE(std::string message);
		void		changeIDX();
		void		DisplayAllContacts();
		int			DisplayNcontact();
		int			ActionADD();
		int			ActionSEARCH();
};

#endif