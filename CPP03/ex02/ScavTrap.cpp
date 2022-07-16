/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:11:41 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/16 01:43:01 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Scavrap " << this->name <<" arrives to the party "<<std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->atack_damage = 20;
	return;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout << "Scavrap " << this->name <<" arrives to the party "<<std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->atack_damage = 20;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavrap " << this->name <<" leaves the party "<<std::endl;
}

void  ScavTrap::guardGate(void)
{
	std::cout << "Scavrap " << this->name <<" have enterred in Gate keeper mode"<<std::endl;
}