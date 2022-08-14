/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:02:29 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/09 20:14:02 by aabduvak         ###   ########.fr       */
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
	randomChump("Arbi");

    // Free all alocated objects
    delete z;
    delete z1;
    return (0);
}
