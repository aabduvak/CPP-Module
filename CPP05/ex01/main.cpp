/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:52:07 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/23 19:39:18 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{ 
	Bureaucrat	br("Hermes", 30);
	std::cout<<"- - - - - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Form	form("Receipt", 35, 35);
		std::cout<< form <<std::endl;
		br.signForm(form);
		std::cout<< form <<std::endl;
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<<"- - - - - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Form	form("Reset Server", 10, 10);
		std::cout<< form <<std::endl;
		br.signForm(form);
		std::cout<< form <<std::endl;
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<<"- - - - - - - - - - - - - - - - - - - -"<<std::endl;
	std::cout<<"- - - - - -Error on Forms - - - - - - -"<<std::endl;
	std::cout<<"- - - - - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Form	form("Born to Fail", -1, -1);
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}

	try
	{
		Form	form("Born to Fail 'The sequel'", 255, 255);
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	return (0);
}