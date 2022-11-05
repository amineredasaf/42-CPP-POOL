/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:56:31 by rsaf              #+#    #+#             */
/*   Updated: 2022/11/05 10:16:28 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int     i;
	char    c;
	std::string line;

	if (ac > 1){
		for (int x = 1; x < ac; x++){
			i = -1;
			line = av[x];
			if (x > 1)
				std::cout << " ";
			while (line[++i]){
				c = toupper(line[i]);
				std::cout << c;
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
}