/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:31:05 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/16 15:36:09 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap " << this->name <<" arrives to the party "<<std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->atack_damage = 30;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << "FragTrap " << this->name <<" arrives to the party "<<std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->atack_damage = 20;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name <<" leaves the party "<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name <<" high fives!"<<std::endl;
}
