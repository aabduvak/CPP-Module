/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:41 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/23 19:21:20 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iomanip>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	public:
		Bureaucrat(std::string str, int grade);
		~Bureaucrat();
		
		std::string getName(void) const;
		int getGrade(void) const;
		
		void increaseGrade(void);
		void decreaseGrade(void);
		
		void signForm(Form &form);
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat &bureu);

#endif