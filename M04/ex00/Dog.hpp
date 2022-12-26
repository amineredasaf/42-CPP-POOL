/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:28:04 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/27 00:38:59 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    Dog(std::string type);
    Dog(const Dog &dog);
    Dog& operator=(const Dog &dog);
    ~Dog();
};