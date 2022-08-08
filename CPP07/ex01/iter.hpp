/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 03:10:34 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/08 03:14:17 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <iomanip>

template<typename T>
void add_one(T &n1)
{	
	n1++;
}

template<typename T>
void rest_one(T &n1)
{	
	n1--;
}

template<typename T>
void add_a_char(T &n1)
{	
	n1.append("a");
}

template<typename T>
void show(T &n1)
{	
	std::cout << n1 << std::endl;	
}


template<typename T>
void iter(T *n1, unsigned int i, void (*func)(T &p1))
{
	unsigned int x;

	x = 0;
	while (x < i)
	{
		func(n1[x]);
		x++;
	}
}

#endif