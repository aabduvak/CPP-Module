/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:59:34 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 17:00:36 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iomanip>
# include <iostream>
# include <fstream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const	std::string	name;
		bool				sign;
		const int			grade_sign;
		const int			grade_exec;
	
	protected:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};class NoSignException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		virtual void executeAction();
	
	public:
		Form(std::string str, int sig , int exe);
		virtual ~Form();
		
		std::string getName(void) const;
		int getGrade_Sign(void) const;
		int getGrade_Exec(void) const;
		bool get_signed(void) const;
		
		void beSigned(const Bureaucrat &bureu);
		virtual void execute(Bureaucrat const & executor);
};

std::ostream &operator<<(std::ostream& os, const Form &bureu);

#endif