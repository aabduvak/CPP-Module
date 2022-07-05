/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:02:29 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 04:02:08 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* z = zombieHorde(7, "Adam");
    int i;
    
    i = -1;
    while (++i < 7)
        z[i].announce();
    delete []z;
    return (0);
}
