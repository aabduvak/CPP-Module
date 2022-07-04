/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:27:16 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/03 15:33:18 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		amount;

public:
	PhoneBook();
	~PhoneBook();
	
	void	show_startup(void);
	void	add_contact(void);
	void	search_contact(void);
	void	show_search_header(void);
};

#endif