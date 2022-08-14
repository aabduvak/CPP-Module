/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:42:54 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/10 17:54:02 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::frac = 8;

//Empty Constructor
Fixed::Fixed() : number(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Copy Constructor
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	number = copy.getRawBits();
	return ;
}

//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//Fixed Operator
Fixed &Fixed::operator=(Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->number = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}