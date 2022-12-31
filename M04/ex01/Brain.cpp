/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:01:10 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/28 21:32:31 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : constructor\n";
}

Brain::Brain(const Brain &BrainObj)
{
	*this = BrainObj;
	return;
}

Brain& Brain::operator=(const Brain &BrainObj)
{
	for(int x = 0; x < 100; x++)
		this->ideas[x] = BrainObj.ideas[x];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain : destructor\n";
}