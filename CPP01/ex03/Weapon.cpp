/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 08:49:38 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 11:01:17 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::~Weapon(){}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string Weapon::getType()
{
    return (this->type);
}