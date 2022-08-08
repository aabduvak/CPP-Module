/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 04:34:53 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/08 04:35:12 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> x(4);
    Array<int> y(7);
    
    for (int i = 0; i < (int)x.getsize();i++)
        x[i] = i;
    for (int i = 0; i < (int)y.getsize();i++)
        y[i] = i;
    std::cout << x << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << y << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << "Hacemos una deep copy (x = y)" << std::endl;
    x = y;
    x[0] = 42;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    
    std::cout << "____________________" << std::endl;
    std::cout << "Usamos el constructor vacio y el de copy " << std::endl;
    Array<int> z(y);
    Array<int> t;
    std::cout << z << std::endl;
    std::cout << t << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << "Comprobamos distintos arrays" << std::endl;
    Array<float> floats(7);
    Array<int> ints(4);
    Array<std::string> strings(6);
    for (int i = 0; i < (int)floats.getsize();i++)
        floats[i] = (i + 0.1f);
    for (int i = 0; i < (int)ints.getsize();i++)
        ints[i] = i;
    for (int i = 0; i < (int)strings.getsize();i++)
        strings[i] = "aaaaaaa";
    std::cout << floats << std::endl;
    std::cout << ints << std::endl;
    std::cout << strings << std::endl;
    std::cout << "______THE_END_______" << std::endl;

    ints[12] = 4;

    
    return 0;
}