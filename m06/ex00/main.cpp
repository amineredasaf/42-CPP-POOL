/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:21:43 by rsaf              #+#    #+#             */
/*   Updated: 2023/01/08 16:48:35 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Conversion obj;
	if (argc > 1)
		obj.findType(argv[1]);
	return 0;
}