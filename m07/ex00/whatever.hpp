/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:53:32 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/14 15:15:33 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "whatever.hpp"
#include <iostream>

template<typename  T>
void    swap (T &rhs, T &lhs){
	
	T tmp;
	tmp = rhs;
	rhs = lhs;
	lhs = tmp;
}

template<typename T>
T	min (T &rhs, T& lhs)
{
	if (rhs < lhs)
		return rhs;
	return lhs;
}

template<typename T>
T	max (T &rhs, T& lhs)
{
	if (rhs > lhs)
		return rhs;
	return lhs;
}