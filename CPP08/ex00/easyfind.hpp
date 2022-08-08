/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:36:53 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/08 09:22:58 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <iomanip>

template<typename T>
int easyfind (T container, int value)
{
	try
	{
		for (int x = 0; container[x] != '\0'; x++)
			if (container[x] == value)
				return x;
		return -1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return -2;
}

# endif