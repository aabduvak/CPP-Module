/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 03:14:53 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/08 03:18:35 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) 
{
	//int integer[5] = {1,2,3,4,5};
	//float floats[5] = {10.1f,20.1f,30.1f,40.1f,50.1f};
	//double doubles[5] = {0.01,1.01,2.01,3.01,4.01};
	std::string strings[5] = {"Hola","que","tal","estas","?"};
	
	///*
	//std::cout << "Integer" << std::endl;
	//::iter( integer, 5 , &::show);
	//std::cout << "- - - add 1 - - - - -" << std::endl;
	//::iter( integer, 5 , &::add_one);
	//::iter( integer, 5 , &::show);
	//std::cout << "- - - rest 1 - - - - -" << std::endl;
	//::iter( integer, 5 , &::rest_one);
	//::iter( integer, 5 , &::show);
	//std::cout << "- - - rest 1 - - - - -" << std::endl;
	//::iter( integer, 5 , &::rest_one);
	//::iter( integer, 5 , &::show);
	//std::cout << "___________________________" << std::endl;
	//*/

	/*
	std::cout << "Float" << std::endl;
	::iter( floats, 5 , &::show);
	std::cout << "- - - add 1 - - - - -" << std::endl;
	::iter( floats, 5 , &::add_one);
	::iter( floats, 5 , &::show);
	std::cout << "- - - rest 1 - - - - -" << std::endl;
	::iter( floats, 5 , &::rest_one);
	::iter( floats, 5 , &::show);
	std::cout << "___________________________" << std::endl;
	*/

	/*
	std::cout << "Doubles" << std::endl;
	::iter( doubles, 5 , &::show);
	std::cout << "- - - add 1 - - - - -" << std::endl;
	::iter( doubles, 5 , &::add_one);
	::iter( doubles, 5 , &::show);
	std::cout << "- - - rest 1 - - - - -" << std::endl;
	::iter( doubles, 5 , &::rest_one);
	::iter( doubles, 5 , &::show);
	std::cout << "___________________________" << std::endl;
	*/
	
	
	std::cout << "strings" << std::endl;
	::iter( strings, 5 , &::show);
	std::cout << "- - - add a - - - - -" << std::endl;
	::iter( strings, 5 , &::add_a_char);
	::iter( strings, 5 , &::show);
	std::cout << "___________________________" << std::endl;
	

	return 0; 
}