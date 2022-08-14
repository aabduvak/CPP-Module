/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 08:48:40 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/09 20:21:45 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon club0 = Weapon("crude spiked club");
    HumanA bob("Bob", club0);
    bob.attack();
    club0.setType("some other type of club");
    bob.attack();
    Weapon club1 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club1);
    jim.attack();
    club1.setType("some other type of club");
    jim.attack();
}