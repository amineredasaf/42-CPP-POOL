/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:34:32 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/07 13:09:10 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <stdio.h>

class Weapon
{
    private:
        std::string type;
    /* data */
    public:
    const std::string& getType() const;
    void setType(std::string newType);
    // Weapon(void);
    Weapon(std::string type);
    // ~Weapon();
};

#endif // WEAPON_H
