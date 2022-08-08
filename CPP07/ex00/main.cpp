/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:07:14 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/08 03:03:13 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class A
{
public:
	int x = 1;
	A();
	~A();
};

class B
{
public:
	int x = 2;
	B();
	~B();
};

A::A(){}
A::~A(){}

B::B(){}
B::~B(){}

int main (void)
{
	A *a = new A();
	B *b = new B();
	::swap( a->x, b->x );
	std::cout << "a = " << a->x << ", b = " << b->x << std::endl;
	std::cout << "min( a, b ) = " << ::min( a->x, b->x ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a->x, b->x ) << std::endl;
	
	int x = 2;
	int y = 5;
	::swap(x, y);
	std::cout << "x = " << x << ", b = " << y << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	delete a;
	delete b;
	return 0; 
}