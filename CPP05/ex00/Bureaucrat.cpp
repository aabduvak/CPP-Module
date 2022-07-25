/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:45:08 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/23 18:51:45 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string str, int grade) : name(str)
{
	if (grade > 150)
		GradeTooLowException();
	if (grade < 1)
		GradeTooHighException();
	this->grade = grade;
	std::cout << this->name << " was created with a grade of "<< this->grade <<std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat dead" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ( "Grade is to high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ( "Grade is to low");
}

//Getters 
std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::decreaseGrade(void)
{
	if (getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade--;
}

void Bureaucrat::increaseGrade(void)
{
	if (getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade++;
}

std::ostream &operator<<(std::ostream& os, const Bureaucrat &bureu)
{
	os << bureu.getName()<< " - whos grade is "<< bureu.getGrade();
	return (os);
}