/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:41 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/23 18:47:31 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iomanip>
# include <iostream>

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
};
std::ostream &operator<<(std::ostream& os, const Bureaucrat &bureu);

#endif