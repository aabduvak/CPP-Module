/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:02:29 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 03:40:58 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    // Heap
    Zombie* z = new Zombie("Adam");
    Zombie* z1 = newZombie("John");
    
    // Stack
    Zombie z0;
    
    z->announce();
    z1->announce();
    z0.announce();

    // Free all alocated objects
    delete z;
    delete z1;
    return (0);
}
