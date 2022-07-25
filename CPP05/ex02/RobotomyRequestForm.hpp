/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:10:20 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 17:50:05 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private:
		void executeAction();
	public:
		RobotomyRequestForm(std::string str);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor);
};

#endif