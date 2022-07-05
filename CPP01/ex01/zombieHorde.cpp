/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 03:42:59 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 04:02:54 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* z = new Zombie[N];
    int     i;

    i = -1;
    while (++i < N)
        z[i].setName(name + std::to_string(i + 1));
    return (z);
}
