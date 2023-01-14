/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:57:50 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/13 23:25:33 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <sys/_types/_size_t.h>
template<typename T>

class Array{
	
	private:
		T		*_array;
		size_t	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		Array& operator=(const Array &obj);
		~Array();
		T& operator[](const size_t index);
		
};

template <typename T>
Array<T>::Array() : _array(nullptr), _size(0) {
};

template <typename T>
Array<T>::Array(unsigned int n){
	if (n > 0){
		this->_array = new T[n];
		this->_size = n;
	}
}

template <typename T>
Array<T>::Array(const Array &obj)
{
	*this = obj;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &obj)
{
	this->_array = obj._array;
	this->_size = obj._size;
	return *this;
}

template<typename T>
Array<T>::~Array() {
}

template<typename T>
T& Array<T>::operator[](const size_t index){
	if (index >= this->_size)
		throw std::exception();
	return (this->_array[index]);
}