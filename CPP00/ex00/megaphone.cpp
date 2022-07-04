/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 02:10:04 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/02 14:26:33 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			for (int j = 0; j < (int)str.length(); j++)
			{
				if (str[j] <= 122 && str[j] >= 97)
					str[j] -= 32;
				std::cout << (char)str[j];
			}
		}
		std::cout << std::endl;
	}
	
	return 0;
}
