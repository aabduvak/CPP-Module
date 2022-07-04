/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:35:15 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/03 16:20:18 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
# include <iostream>
# include <iomanip>
# include <string>

PhoneBook::PhoneBook()
{
	this->amount = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::show_startup(void)
{
	std::cout << "# Phone Book" << std::endl;
	std::cout << "# Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
}

void PhoneBook::add_contact(void)
{
	if (this->amount == 8)
		std::cout << "# The directory is full !" << std::endl;
	else if (this->contacts[this->amount].set_informations(this->amount + 1))
		this->amount++;
}

void PhoneBook::show_search_header(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].display_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void PhoneBook::search_contact(void)
{
	int	index;

	if (this->amount == 0)
		std::cout << "# Add a contact before searching !" << std::endl;
	else
	{
		this->show_search_header();
		std::cout << "# Enter Index to display Informations or 0 to Exit\n~";
		while (!(std::cin >> index) || (index < 0 || index > this->amount))
		{
			std::cin.clear();
			std::cout << "# Invalid Index\n~";
		}
		if (index > 0)
			this->contacts[index - 1].display();
	}
}