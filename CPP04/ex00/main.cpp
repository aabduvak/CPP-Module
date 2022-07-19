/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:44:57 by mortiz-d          #+#    #+#             */
/*   Updated: 2022/07/19 01:24:57 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main (void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* n = new WrongCat();

	std::cout << "The Dog should be a "<< j->getType() << " " << std::endl;
	std::cout << "The Cat should be a " << i->getType() << " " << std::endl;
	std::cout << "This animal should be a " << meta->getType() << " " << std::endl;
	std::cout << "This animal should be a " << n->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	n->makeSound();

	delete j;
	j = i;

	delete meta;
	delete i;
	delete n;
	//meta->makeSound();
}