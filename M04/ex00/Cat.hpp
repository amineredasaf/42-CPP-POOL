/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:27:56 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/01 04:27:56 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat();
    Cat(std::string type);
    Cat(const Cat &cat);
    Cat& operator=(const Cat &cat);
    ~Cat();

	std::string getType() const;
	void makeSound() const;
};