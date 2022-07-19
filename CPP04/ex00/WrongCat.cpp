/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:32:03 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/19 01:31:18 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "Wrong cat constructor called" << std::endl;

}

WrongCat::~WrongCat()
{
	std::cout << "Wrong deconstructor called" << std::endl;
}
