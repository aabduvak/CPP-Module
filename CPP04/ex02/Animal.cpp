/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:27:24 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/19 03:13:42 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "test";
	std::cout << "Default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default deconstructor called" << std::endl;
}
