/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:17:21 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/19 03:22:15 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iomanip>
# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	virtual void makeSound(void) const = 0; // pure virtual function
};

#endif