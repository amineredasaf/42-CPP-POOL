/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 02:21:23 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/23 11:10:56 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
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
		std::string getName();
		int			getHitPoint();
		int			getEnergyPoint();
		int			getAttackDamge();
		/*			Setters			*/
		void		setName(std::string Name);
		void		setHitPoint(int HP);
		void		setEnergyPoint(int EP);
		void		setAttackDamge(int AD);
		
};