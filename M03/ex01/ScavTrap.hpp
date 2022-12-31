/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 07:26:42 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/27 11:58:27 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap &Obj);
		ScavTrap& operator=(const ScavTrap &Obj);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};