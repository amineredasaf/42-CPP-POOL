/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:59:07 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/12 01:16:00 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstddef>

Base * generate(void){
	
	std::srand(time(0));
	
	int x = std::rand() % 3;
	if (x == 0){
		return (new A);
	}
	else if (x == 1){
		return (new B);
	}
	else if(x == 2){   
		return (new C);
	}
	return NULL;
}

void identify(Base* p){

	if (dynamic_cast<A*>(p)){
		std::cout << "A ptr is casted successfully\n";
		return;
	}
	else
		std::cout << "A ptr is casted failed\n";
		
	if (dynamic_cast<B*>(p)){
		std::cout << "B ptr is casted successfully\n";
		return;
	}
	else
		std::cout << "B ptr is casted failed\n";
	 	
	if (dynamic_cast<C*>(p)){
		std::cout << "C ptr is casted successfully\n";
		return;
	}
	else
		std::cout << "C ptr is casted failed\n";
	 	

}

void identify(Base& p)
{
	try{
		A a = dynamic_cast< A&>(p);
		std::cout << "A ref is casted successfully\n";
		return;
	}
	catch(...){ std::cout << "A ref is casted failed\n"; }

	try{
		B b = dynamic_cast< B&>(p);
		std::cout << "B ref is casted successfully\n";
		return;
	}
	catch(...){ std::cout << "B ref is casted failed\n"; }

	try {
		C c = dynamic_cast< C&>(p);
		std::cout << "C ref is casted successfully\n";
		return;
	} 
	catch (...){ std::cout << "C ref is casted failed\n"; }

}

int main()
{
	Base x;
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
}