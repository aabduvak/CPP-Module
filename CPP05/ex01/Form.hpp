/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:06:14 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/23 19:29:41 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iomanip>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const	std::string	name;
		bool				sign;
		const int			grade_sign;
		const int			grade_exec;

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
		Form(std::string name, int sign , int exec);
		~Form();
		
		std::string getName(void) const;
		int getGrade_Sign(void) const;
		int getGrade_Exec(void) const;
		bool get_signed(void) const;
		
		void beSigned(const Bureaucrat &bureu);
};

std::ostream &operator<<(std::ostream& os, const Form &bureu);

#endif