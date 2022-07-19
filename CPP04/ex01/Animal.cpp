/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:27:24 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/19 01:34:15 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "test";
	std::cout << "Default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default deconstructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return(this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Even though I'm an Animal, I cannot make a sound :|"<< std::endl;
}
