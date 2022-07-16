/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:02:29 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/16 01:43:55 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap a("Pepe");
	
	a.attack("Juan");
	a.takeDamage(3);
	a.beRepaired(3);

	ScavTrap b("Pedro");
	b.guardGate();
	b.takeDamage(7);
	b.attack("Juan");
	b.beRepaired(5);
	return (0);
}