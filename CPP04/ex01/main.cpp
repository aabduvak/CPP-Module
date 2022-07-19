/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 03:03:32 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/19 03:03:35 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
	Animal* array[10];
	const Animal* dog = new Dog();
    const Animal* cat = new Cat();
	std::cout<<"____________________"<<std::endl;
	int i = 0;
	while (i < 5)
		array[i++] = new Dog();
	while (i < 10)
		array[i++] = new Cat();
	std::cout<<"____________________"<<std::endl;
	while (i > 0)
		delete array[--i];
	std::cout<<"____________________"<<std::endl;
	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
}