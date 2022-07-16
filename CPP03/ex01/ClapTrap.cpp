/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:50:41 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/13 16:30:53 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap() : name("without name"), hit_points(10) , energy_points(10) , atack_damage(0)
{
	std::cout << "Claptrap " << this->name <<" arrives to the party "<<std::endl;
	return;
}

ClapTrap::ClapTrap(std::string str) : name(str), hit_points(10) , energy_points(10) , atack_damage(0)
{
	std::cout << "Claptrap " << this->name <<" arrives on the party "<<std::endl;
	return;
}

//Destructor
ClapTrap::~ClapTrap()
{

	std::cout << "Claptrap " << this->name <<" leaves the party "<<std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points <= 0)
		return ;
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name; 
	std::cout << " took " << amount <<" damage, ";
	std::cout << this->hit_points << " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points <= 0)
		return ;
	this->hit_points += amount;
	this->energy_points--;
	std::cout << "ClapTrap " << this->name 
	<< " repairs itself " << amount <<" hit points, "
	<< this->energy_points << " energy points left!" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	if (this->energy_points <= 0)
		return ;
	std::cout << "Claptrap " << this->name <<" attacks " << target;
	std::cout << ", causing "<< this->atack_damage << " points of damage! ";
	std::cout << this->energy_points << " energy points left!" << std::endl;
}
