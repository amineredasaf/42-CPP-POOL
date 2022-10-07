/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:34:04 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/05 21:32:19 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	this->type = newType;
}

const	std::string& Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}