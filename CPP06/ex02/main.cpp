/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:55:58 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:58:10 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Base_A.hpp"
#include "Base_B.hpp"
#include "Base_C.hpp"

#include <limits>

Base *generate(void)
{
	int ramdon;
	int i;
	Base *ret[3] = {new Base_A() , new Base_B() , new Base_C()};

	i = 0;
	std::srand(std::time(0));
	ramdon = (rand() % 3) + 1;
	while (i < 3)
	{
		if (i != (ramdon - 1))
			delete ret[i];
		i++;
	}
	return ret[ramdon - 1];
}

void identify(Base *p)
{
	bool base[3] = { (dynamic_cast<Base_A*>(p)) , (dynamic_cast<Base_B*>(p)) , (dynamic_cast<Base_C*>(p))};
	std::string type[3] = {"A", "B" ,"C"};
	int i;
	
	i = -1;
	while (++i < 3)
		if (base[i] == true)
			break;
	if (i == 3)
		std::cout << "This pointer is not a specific son of Base"<< std::endl;
	else
		std::cout << "This pointer is Base "<< type[i] <<std::endl;
 }

int main (void)
{
	Base *base = generate();
	identify(base);
	base->info();
	delete base;
	return (0);
}