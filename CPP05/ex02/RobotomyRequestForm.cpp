/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:50:14 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 17:50:29 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string str) : Form(str, 72, 45)
{
    return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (getGrade_Exec() < executor.getGrade())
		throw Form::GradeTooLowException();
	if (this->get_signed() == false)
		throw Form::NoSignException();
    this->executeAction();
}

void RobotomyRequestForm::executeAction(void)
{
    int n_generated;

   	srand (time(NULL));
    n_generated = rand() % 100;
    if (n_generated < 50)
        std::cout << "Target "<<this->getName() << " has been robotomized successfully" <<std::endl;
    else
       std::cout << "Target "<<this->getName() <<  " failed to be robotimized" <<std::endl;
}