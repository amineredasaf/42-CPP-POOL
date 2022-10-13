/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:41:38 by rsaf              #+#    #+#             */
/*   Updated: 2022/10/13 10:02:31 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
			std::string filename = av[1];
			std::ifstream inputfile;
			std::string s2 = av[3];
			std::string s1 = av[2];
			std::ofstream output;
			std::string data;
			size_t pos;
			inputfile.open(av[1]);
			if (inputfile.is_open())
			{
				std::getline(inputfile  , data,  '\0');
				while ((pos = data.find(s1, pos)) != data.npos)
				{
					data.erase(pos ,s1.size());
					data.insert(pos , s2);
				}
				output.open(filename + "replace");
				if (output.is_open())
					output << data;
			}
	}
}