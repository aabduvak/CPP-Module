/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:13:50 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 18:33:34 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain(std::string complain)
{
    int i;
    std::string str[4] = {"DEBUG","INFO","WARNING","ERROR"};
    Harl::funptr function[4] = {&Harl::debug, &Harl::info,&Harl::warning, &Harl::error};
    
    i = -1;
    while (++i < 4)
        if (str[i] == complain)
            break ;
    
    switch (i)
    {
    case 0:
        (this->*(function[0]))();
    case 1:
        (this->*(function[1]))();
    case 2:
        (this->*(function[2]))();
    case 3:
        (this->*(function[3]))();
        break;
    default:
        std::cout << "[ Probably complaning about insignificiant problems ]" << std::endl;
        break;
    }
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." <<std::endl;
    std::cout << "I just love it!." << std::endl;
    std::cout << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." <<std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!." << std::endl;
    std::cout << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month..." <<std::endl;
    std::cout << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now..." <<std::endl;
    std::cout << std::endl;
}