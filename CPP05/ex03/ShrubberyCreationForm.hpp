/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:09:48 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 17:10:10 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
		void executeAction();
	public:
		ShrubberyCreationForm(std::string str);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor);
};
#endif