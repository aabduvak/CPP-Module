/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:15:59 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/13 00:23:24 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int nbr;
	const static int frac;

public:
	Fixed();
	Fixed(int nbr);
	Fixed(float nbr);
	Fixed(const Fixed &copy);
	~Fixed();
	
	Fixed& operator=(const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	
	//MIN-MAX Operators
	static Fixed min(const Fixed &fixed, const Fixed &fixed2);
	static Fixed max(const Fixed &fixed, const Fixed &fixed2);
	
	//Comparison Operators
	bool operator!=(const Fixed &fixed2);
	bool operator==(const Fixed &fixed2);
	bool operator>(const Fixed &fixed2);
	bool operator<(const Fixed &fixed2);
	bool operator>=(const Fixed &fixed2);
	bool operator<=(const Fixed &fixed2);
	
	//Arithmetic Operators
	Fixed operator-(const Fixed &fixed2) const;
	Fixed operator+(const Fixed &fixed2) const;
	Fixed operator*(const Fixed &fixed2) const;
	Fixed operator/(const Fixed &fixed2) const;
	//Pre Increase/Decrease Operators
	Fixed &operator--(void);
	Fixed &operator++(void);

	//Post Increase/Decrease Operators
	Fixed operator--(int);
	Fixed operator++(int);
};

//Output Operator
std::ostream &operator<<(std::ostream& os, const Fixed &f); //, const Fixed &f

#endif