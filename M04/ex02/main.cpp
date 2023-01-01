/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:22:44 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/01 04:27:18 by rsaf             ###   ########.fr       */
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
    Animal  *An[4];
    An[0] = new Cat;
	std::cout << "--\n";
    An[1] = new Cat;
	std::cout << "--\n";
    An[2] = new Dog;
	std::cout << "--\n";
    An[3] = new Dog;
	std::cout << "--\n";
    
	std::cout << "--\n";
    delete An[0];
	std::cout << "--\n";
    delete An[1];
	std::cout << "--\n";
    delete An[2];
	std::cout << "--\n";
    delete An[3];
	std::cout << "--\n";

	// for Testing Copy constructor
	{
		Cat x1;
		{
			Cat y1(x1);
		}
	}
	std::cout << "--\n";
	{
		Dog x;
		{
			Dog y(x);
		}
		/*Cat Version*/
	}
	// *****************************
	
	// * * * * * * * * * * * 
	// * for testing * //
	// Dog basic;
	// {
	// 	Dog tmp;
	// 	tmp = basic; // for testing shallow copy
	// }
	// * * * * * * * * * * *
	return 0;
}