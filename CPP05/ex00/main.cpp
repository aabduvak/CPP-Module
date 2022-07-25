/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:52:07 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/23 19:20:53 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{ 
	try
	{
		Bureaucrat br("Test",36);

		std::cout<< br <<std::endl;
		br.decreaseGrade();
		br.decreaseGrade();
		std::cout<< br <<std::endl;
		br.increaseGrade();
		br.increaseGrade();
		std::cout<< br <<std::endl;
		
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<< "- - - - - - - - - - - - - - - - -"<<std::endl;
	std::cout<< "- - - Going to fail  - - - - - -"<<std::endl;
	std::cout<< "- - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Bureaucrat br("Juan",150);
		br.increaseGrade();
		
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	std::cout<< "- - - - - - - - - - - - - - - - -"<<std::endl;
	try
	{
		Bureaucrat br("Pedro",1);
		br.decreaseGrade();
	}
	catch (std::exception & e)
	{
		std::cout<< e.what() <<std::endl;
	}
	return (0);
}