/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:44:33 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/19 19:56:46 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*                  getters                 */
/*------------------------------------------*/
std::string Contact::getFirstName() {return this->FirstName;}
std::string Contact::getLastName() {return this->LastName;}
std::string Contact::getNickname() {return this->Nickname;}
std::string Contact::getPhoneNumber() {return this->PhoneNumber;}
std::string Contact::getDarkestSecret() {return this->DarkestSecret;}

/*                  setters                 */
/*------------------------------------------*/
void    Contact::setInfo(std::string FirstName, std::string LastName, std::string Nickname, std::string PhoneNumber, std::string DarkestSecret)
{
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->Nickname = Nickname;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
}
/* 
----------  to understand   ----------
            keyword : this->
*/