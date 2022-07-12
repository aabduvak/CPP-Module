/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:15:29 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/13 00:27:38 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

const int Fixed::frac = 8;

//Empty Constructor
Fixed::Fixed() : nbr(0)
{
	return ;
}

//Int Constructor
Fixed::Fixed(int number) : nbr(number << 8)
{
	return ;
}

//Float Constructor
Fixed::Fixed(float number) : nbr(static_cast<int>(roundf(number * (1 << frac))))
{
	return ;
}

//Copy Constructor
Fixed::Fixed(const Fixed &copy)
{
	nbr = copy.getRawBits();
	return ;
}

//Destructor
Fixed::~Fixed()
{
	return ;
}

//Fixed Operator
Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->nbr = fixed.getRawBits();
	return *this;
}

//Fixed Operator output
std::ostream& operator<<(std::ostream& os, const Fixed &f) //, const Fixed &f
{
	os << f.toFloat();
	return (os);
}

/**
 * Functions to Pre Increase/Decrease Operators
 */

Fixed &Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed &Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

/**
 * Functions to Post Increase/Decrease Operators
 */

Fixed Fixed::operator--(int)
{
	Fixed p(this->toFloat());
	this->setRawBits(this->getRawBits() - 1);
	//std::cout<<std::endl<< "Dolor "<< p<< std::endl;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed p(this->toFloat());
	this->setRawBits(this->getRawBits() + 1);
	return (p);
}

/**
 * Functions to MIN MAX operators
 */

Fixed Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if(f1.getRawBits() < f2.getRawBits())
		return (f1);
	return(f2);
}

Fixed Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if(f1.getRawBits() > f2.getRawBits())
		return (f1);
	return(f2);
}

/**
 * Functions to comparison operators
 */

bool Fixed::operator!=(const Fixed &f2)
{
	if (this->getRawBits() == f2.getRawBits())
		return (0);
	return(1);
}

bool Fixed::operator==(const Fixed &f2)
{
	if (this->getRawBits() != f2.getRawBits())
		return (0);
	return(1);
}

bool Fixed::operator>(const Fixed &f2)
{
	if (this->getRawBits() > f2.getRawBits())
		return (1);
	return(0);
}

bool Fixed::operator<(const Fixed &f2)
{
	if (this->getRawBits() < f2.getRawBits())
		return (1);
	return(0);
}

bool Fixed::operator>=(const Fixed &f2)
{
	if (this->getRawBits() >= f2.getRawBits())
		return (1);
	return(0);
}

bool Fixed::operator<=(const Fixed &f2)
{
	if (this->getRawBits() <= f2.getRawBits())
		return (1);
	return(0);
}

/**
 * Functions to  arithmetic operators
 */

Fixed Fixed::operator-(const Fixed &f2) const
{
	Fixed result(this->toFloat() - f2.toFloat());
	return(result);
}

Fixed Fixed::operator+(const Fixed &f2) const
{
	Fixed result(this->toFloat() + f2.toFloat());
	return(result);
}

Fixed Fixed::operator*(const Fixed &f2) const
{
	Fixed result(this->toFloat() * f2.toFloat());
	return(result);
}

Fixed Fixed::operator/(const Fixed &f2) const
{
	Fixed result(this->toFloat() / f2.toFloat());
	return(result);
}

/**
 * Functions to manage the bits
 */

int Fixed::getRawBits(void) const
{
	return (this->nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
}

int Fixed::toInt( void ) const
{
	return (static_cast<int>(this->getRawBits() / (1 << this->frac)));
}

float Fixed::toFloat( void ) const
{	
	return (static_cast<float>(this->getRawBits() / static_cast<float>(1 << this->frac)));
}
