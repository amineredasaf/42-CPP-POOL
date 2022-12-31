/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:01:12 by rsaf              #+#    #+#             */
/*   Updated: 2022/12/28 17:31:29 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Brain{
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain &BrainObj);
		Brain& operator=(const Brain &BrainObj);
		~Brain();
};