/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 03:03:32 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/19 03:21:04 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
	const Animal* dog = new Dog();
    const Animal* cat = new Cat();
	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;
}