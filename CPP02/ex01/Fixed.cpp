/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:15:29 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/13 00:19:05 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

const int Fixed::frac = 8;

//Empty Constructor
Fixed::Fixed() : number(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Int Constructor
Fixed::Fixed(int number) : number(number << 8)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

//Float Constructor
// 000.10110 (0.6875) - 10110 (22)
Fixed::Fixed(float number) : number(static_cast<int>(roundf(number * (1 << frac))))
{
	std::cout << "Float constructor called" << std::endl;
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

//Fixed Operator assign
Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->number = fixed.getRawBits();
	return *this;
}

//Fixed Operator output
std::ostream& operator<<(std::ostream& os, const Fixed &f) //, const Fixed &f
{
	os << f.toFloat();
	return (os);
}


int Fixed::getRawBits(void) const
{
	return (this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int Fixed::toInt( void ) const
{
	return (static_cast<int>(this->getRawBits() / (1 << this->frac)));
}

float Fixed::toFloat( void ) const
{	
	return (static_cast<float>(this->getRawBits() / static_cast<float>(1 << this->frac)));
}