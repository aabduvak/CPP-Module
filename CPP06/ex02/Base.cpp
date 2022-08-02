/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:48:45 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:50:38 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
	return;
}

Base::~Base()
{
	return;
}

void Base::info(void) const
{
	std::cout << "Im origin base" << std::endl;
}