/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:00:56 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 17:02:36 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string str, int sig , int exe) : name(str), sign(false), grade_sign(sig), grade_exec(exe)
{
	if (sig > 150 || exe > 150)
		throw Form::GradeTooLowException();
	if (sig < 1 || exe < 1)
		throw Form::GradeTooHighException();
	return ;
}

Form::~Form()
{
	return ;
}

std::ostream &operator<<(std::ostream& os, const Form &form)
{
	os << "Form : "<<form.getName()<< " requires a signing grade of "<< form.getGrade_Sign();
	os << " and a execution grade of "<<form.getGrade_Exec();
	if (form.get_signed() == true)
		os << " this form IS SIGNED";
	else
		os << " this form IS NOT SIGNED";
	return (os);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ( "Grade is to high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ( "Grade is to low");
}

const char* Form::NoSignException::what() const throw()
{
	return ( "form isn't signed");
}

//Getters
std::string Form::getName(void) const
{
	return (this->name);
}

int Form::getGrade_Sign(void) const
{
	return (this->grade_sign);
}

int Form::getGrade_Exec(void) const
{
	return (this->grade_exec);
}

bool Form::get_signed(void) const
{
	return (this->sign);
}

//Functions
void Form::beSigned(const Bureaucrat &bureu)
{
	if (getGrade_Sign() < bureu.getGrade())
		throw Form::GradeTooLowException();
	else
		this->sign = true;
}

void Form::execute(Bureaucrat const & executor)
{
	if (getGrade_Exec() < executor.getGrade())
		throw Form::GradeTooLowException();
	if (this->get_signed() == false)
		throw Form::NoSignException();
	this->executeAction();
}

void Form::executeAction(void)
{
	std::cout<< "Form " << this->getName() << " was executed." << std::endl;	
}