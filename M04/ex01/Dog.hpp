/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:28:04 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/01 01:31:40 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    private:
        Brain* mind;
    public:
    Dog();
    Dog(std::string type);
    Dog(const Dog &dog);
    Dog& operator=(const Dog &dog);
    ~Dog();

	std::string getType() const;
	void makeSound() const ;
};