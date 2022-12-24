/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 02:21:23 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/24 19:08:24 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		int	HitPoints;
		int	EnergyPoint;
		int AttackDamge;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &Obj);
		ClapTrap& operator=(const ClapTrap &Obj);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	eRepaired(unsigned int amount);
		
		/*			getters			*/
		std::string getName() const;
		int			getHitPoint() const;
		int			getEnergyPoint() const;
		int			getAttackDamge() const;
		/*			Setters			*/
		void		setName(std::string Name);
		void		setHitPoint(int HP);
		void		setEnergyPoint(int EP);
		void		setAttackDamge(int AD);
		
};