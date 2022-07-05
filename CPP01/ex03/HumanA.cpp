/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:26:20 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 10:57:19 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w) : weapon(w)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << this->name
        << " attacks with their "
        << this->weapon.getType() << std::endl;
}