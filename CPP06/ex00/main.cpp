/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:07:14 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:37:30 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"
#include <iostream>
#include <sstream>

int main (int argc, char **argv)
{
	std::string str;

	if (argc == 2)
	{
		str = argv[1];
		Caster *test = new Caster(str);
		test->show();
		free(test);
	}
	else
		std::cout<< "Wrong input "<<argc <<std::endl;
	return (0);
}