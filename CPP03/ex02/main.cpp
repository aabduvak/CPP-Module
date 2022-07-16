/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:02:29 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/16 15:39:34 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	std::cout << "______________________________"<< std::endl;
	ClapTrap a("Pepe");
	a.attack("Juan");
	a.takeDamage(3);
	a.beRepaired(3);

	std::cout << "______________________________"<< std::endl;
	ScavTrap b("Pedro");
	b.guardGate();
	b.attack("Juan");

	std::cout << "______________________________"<< std::endl;
	FragTrap c("Paco");
	c.highFivesGuys();
	c.attack("Juan");
	std::cout << "______________________________"<< std::endl;
	return (0);
}