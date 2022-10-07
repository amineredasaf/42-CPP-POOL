/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:34:19 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/07 13:05:58 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	Name;
		Weapon		&WeaponName;
	public:
		HumanA(std::string newName, Weapon &newWeapon);
		~HumanA(void);
		void attack();
};

#endif