/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:52:59 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 17:53:28 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string str) : Form(str, 25, 5)
{
    return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (getGrade_Exec() < executor.getGrade())
		throw Form::GradeTooLowException();
	if (this->get_signed() == false)
		throw Form::NoSignException();
    this->executeAction();
}

void PresidentialPardonForm::executeAction(void)
{
    std::cout << "Target "<<this->getName() << " has been pardoned by Zafod Beeblebrox." <<std::endl;
}
