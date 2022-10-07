/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:34:25 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/05 21:53:43 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	Name;
		Weapon		*WeaponName;
	public:
		HumanB(std::string newName);
		~HumanB(void);
		void setWeapon(Weapon& newWeapon);
		void attack();
};

#endif