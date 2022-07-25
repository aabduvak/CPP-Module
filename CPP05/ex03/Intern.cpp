/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:59:46 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 19:08:58 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	return ;	
}

Intern::~Intern()
{
	return ;
}

const char* Intern::NoFormFound::what() const throw()
{
	return ( "No Form Found");
}

Form *Intern::makeForm(std::string type, std::string target)
{
	Form *creation = NULL;
    std::string array[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    Form *function[3] = {new PresidentialPardonForm(target) , new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	
	for (int i = 0; i < 3; i++)
	{
		if (array[i] == type)
		{
			creation = function[i];
			break ;
		}
	}
	for (int i = 2; i >= 0; i--)
    {
        if (creation != function[i])
            delete function[i];
    }
	if (creation == NULL)
		throw Intern::NoFormFound();
	return (creation);
}