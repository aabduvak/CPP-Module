/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:42:47 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:43:23 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string str) :name(str)
{
	return;
}

Data::~Data()
{
	return;
}

void Data::hello(void)
{
	if (this->name == "")
		std::cout << "I have no name :("<< std::endl;
	else
		std::cout << "My name is "<< this->name<< std::endl;
	return;
}

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}