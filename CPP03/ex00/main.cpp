/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:02:29 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/13 16:41:51 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <unistd.h>

int main(void)
{
	ClapTrap a ("Pepe");

	a.attack("Juan");
	a.takeDamage(3);
	a.beRepaired(3);
	return (0);
}
