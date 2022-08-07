/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:44:35 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/07 16:21:01 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>
using std::string;
class Contact
{
    private:  
        string FirstName;
        string LastName;
        string Nickname;
        string PhoneNumber;
        string DarkestSecret;
    public:
        void setInfo(string FirstName, string LastName, string Nickname, string PhoneNumber, string DarkestSecret);
        string getFirstName();
        string getLastName();
        string getNickname();
        string getPhoneNumber();
        string getDarkestSecret();
};

#endif