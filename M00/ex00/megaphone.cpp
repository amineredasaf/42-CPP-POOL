/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:56:31 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/31 21:28:15 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int     i; 
	char    c;

	if (ac > 1){
		for (int x = 1; x < ac; x++){
			i = -1;
			while (av[x][++i]){
				c = toupper(av[x][i]);
				std::cout << c;
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
}