/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:58:03 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/27 16:52:47 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat &WrongCat);
		WrongCat& operator=(const WrongCat &WrongCat);
		~WrongCat();

		std::string getType() const;
		void makeSound() const;
};