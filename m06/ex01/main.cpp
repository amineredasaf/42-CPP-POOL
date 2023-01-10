/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:32:19 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/09 18:41:44 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


uintptr_t serialize(Data* ptr){
	return reinterpret_cast <uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data obj;
	obj.x = 3;
	obj.y = 4;

	uintptr_t uiptr = serialize(&obj);
	Data *cpy = deserialize(uiptr);
	std::cout << cpy->x << " " << cpy->y << "\n";
	std::cout << "- address of cpy : " << cpy << "\n";
	std::cout << "- address of obj : " << &obj << "\n";
	std::cout << "- address of uiptr : " << &uiptr << "\n";
	return 0;
}