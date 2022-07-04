/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:13:16 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/03 15:31:27 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook pbook;
	bool run;
	std::string command;

	pbook.show_startup();
	run = true;
	while (run)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			pbook.add_contact();
		else if (command == "SEARCH")
			pbook.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "# Bye." << std::endl;
			run = false;
		}
	}
	return (0);
}