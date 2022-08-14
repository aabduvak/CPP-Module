/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:29:28 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/13 00:31:39 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	
	/* Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0; */
	Fixed a( 42.42f );
	Fixed b( 42.42f );
	Fixed c( 10 );
	Fixed d( 100 );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "Testing operators "<< std::endl;
	std::cout << " a("<< a << ") != b("<< b << ") -> "<< (a!=b) << std::endl;
	std::cout << " a("<< a << ") != c("<< c << ") -> "<< (a!=c) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") == b("<< b << ") -> "<< (a==b) << std::endl;
	std::cout << " a("<< a << ") == c("<< c << ") -> "<< (a==c) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") > c("<< c << ") -> "<< (a>c) << std::endl;
	std::cout << " a("<< a << ") > d("<< d << ") -> "<< (a>d) << std::endl;
	std::cout << " a("<< a << ") > b("<< b << ") -> "<< (a>b) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") >= c("<< c << ") -> "<< (a>=c) << std::endl;
	std::cout << " a("<< a << ") >= d("<< d << ") -> "<< (a>=d) << std::endl;
	std::cout << " a("<< a << ") >= b("<< b << ") -> "<< (a>=b) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") < c("<< c << ") -> "<< (a<c) << std::endl;
	std::cout << " a("<< a << ") < d("<< d << ") -> "<< (a<d) << std::endl;
	std::cout << " a("<< a << ") < b("<< b << ") -> "<< (a<b) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") <= c("<< c << ") -> "<< (a<=c) << std::endl;
	std::cout << " a("<< a << ") <= d("<< d << ") -> "<< (a<=d) << std::endl;
	std::cout << " a("<< a << ") <= b("<< b << ") -> "<< (a<=b) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") - b("<< b << ") -> "<< (a-b) << std::endl;
	std::cout << " a("<< a << ") - c("<< c << ") -> "<< (a-c) << std::endl;
	std::cout << " a("<< a << ") - d("<< d << ") -> "<< (a-d) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") + b("<< b << ") -> "<< (a+b) << std::endl;
	std::cout << " a("<< a << ") + c("<< c << ") -> "<< (a+c) << std::endl;
	std::cout << " a("<< a << ") + d("<< d << ") -> "<< (a+d) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") * b("<< b << ") -> "<< (a*b) << std::endl;
	std::cout << " a("<< a << ") * c("<< c << ") -> "<< (a*c) << std::endl;
	std::cout << " a("<< a << ") * d("<< d << ") -> "<< (a*d) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	std::cout << " a("<< a << ") / b("<< b << ") -> "<< (a/b) << std::endl;
	std::cout << " a("<< a << ") / c("<< c << ") -> "<< (a/c) << std::endl;
	std::cout << " a("<< a << ") / d("<< d << ") -> "<< (a/d) << std::endl;
	std::cout << "__________________________________________"<< std::endl;
	return 0; 
}