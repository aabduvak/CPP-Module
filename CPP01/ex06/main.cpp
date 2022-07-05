/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:06:54 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 18:21:04 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl;
    int i;
    std::string str;
    
    i = 0;
    while (++i < argc)
    {
        str = argv[i];
        harl.complain(str);
    }
    return (0);
}
