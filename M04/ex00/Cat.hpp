/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:27:56 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/27 00:38:55 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat();
    Cat(std::string type);
    Cat(const Cat &cat);
    Cat& operator=(const Cat &cat);
    ~Cat();
};