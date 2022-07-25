/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:59:55 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/25 18:28:26 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_CPP

# include <iostream>
# include "Form.hpp"

class Intern
{
private:
	
public:
	class NoFormFound : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	Intern();
	~Intern();
	
	Form* makeForm(std::string type ,std::string target);
};

#endif