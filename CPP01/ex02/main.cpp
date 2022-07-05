/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 04:05:43 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 08:48:17 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN";

    std::cout << "Memory address of variable: " << &str << std::endl;
    std::cout << "Memory held by pointer: " << stringPTR << std::endl;
    std::cout << "Memory held by reference: " << &stringREF << std::endl;
    
    std::cout << std::endl;

    std::cout << "Value of variable: " << str << std::endl;
    std::cout << "Value pointed to by pointer: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by reference: " << stringREF << std::endl;

    return (0);
}

/**
 * The main differences between pointers and references are -
 * 
 * References are used to refer an existing variable in another name whereas pointers are used to store address of variable.
 * 
 * References cannot have a null value assigned but pointer can.
 * 
 * A reference variable can be referenced by pass by value whereas a pointer can be referenced but pass by reference.
 * 
 * A reference must be initialized on declaration while it is not necessary in case of pointer.
 * 
 * A reference shares the same memory address with the original variable but also takes up some space on the stack whereas a pointer has its own memory address and size on the stack.