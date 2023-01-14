/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:42:17 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/14 14:50:21 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <sys/_types/_size_t.h>

template<typename T>

void	writeT(T array)
{
	std::cout << array << "\n";
}

template<typename T>

void	iter(T addr[], size_t lentgh, void (*f)(T))
{
	size_t x = 0;
	while (x < lentgh){
		f(addr[x]);
		x++;
	}
}