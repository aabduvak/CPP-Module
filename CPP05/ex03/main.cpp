/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:53:40 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 19:15:28 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main (void)
{ 
	Intern		*intern = new Intern();
	Bureaucrat	*bureu = new Bureaucrat("Juan", 148);
	Bureaucrat	*bureu2 = new Bureaucrat("Trebor", 36);
	Bureaucrat	*bureu3 = new Bureaucrat("Hermes", 5);
	
	std::cout << std::endl<< "- - - - - - - - - - - - - "<<std::endl;
	std::cout<< "- -Let's create a form- - "<<std::endl;
	std::cout<< "- - - - - - - - - - - - - "<<std::endl;
	try
	{
		Form 	*form = intern->makeForm("PresidentialPardonForm", "Alex");
		bureu2->signForm(*form);
		bureu3->signForm(*form);
		bureu2->executeForm(*form);
		bureu3->executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout<< "The test has failed beacuse of "<< e.what()<<std::endl;
	}
	std::cout << std::endl<< "- - - - - - - - - - - - - "<<std::endl;
	std::cout<< "- -Testing form 2 fail- - "<<std::endl;
	std::cout<< "- - - - - - - - - - - - - "<<std::endl;
	try
	{
		Form 	*form2 = intern->makeForm("UnknowForm", "Born 2 Fail");
		bureu->signForm(*form2);
		delete form2;
	}
	catch (std::exception & e)
	{
		std::cout<< "The test has failed beacuse of "<< e.what()<<std::endl;
	}
	delete bureu;
	delete bureu2;
	delete bureu3;
	delete intern;
	return (0);
}