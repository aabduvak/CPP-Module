/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:07:23 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 03:25:31 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::Zombie()
{
    this->_name = "Brayan";
}

Zombie::~Zombie()
{
    std::cout << this->_name << " deleted" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
