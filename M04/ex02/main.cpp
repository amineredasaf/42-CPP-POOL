/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:22:44 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/28 22:19:34 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// // const Animal* i = new Cat();
	// delete j;//should not create a leak
	// // delete i;
	// // ...
	Dog h;
	{
		Dog test;
		test = h;
	}
	return 0;
}