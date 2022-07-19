/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 01:32:04 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/19 01:32:25 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "test";
	std::cout << "Default wrong constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default wrong deconstructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Even though I'm the WrongAnimal I cannot make a sound :("<< std::endl;
}