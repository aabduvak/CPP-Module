/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:52:26 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 17:52:43 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	private:
		void executeAction();
	public:
		PresidentialPardonForm(std::string str);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor);
};

#endif