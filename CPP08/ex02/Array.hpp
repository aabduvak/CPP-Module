/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 04:33:50 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/08 04:34:13 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <iomanip>

template<class T>
class Array
{
	public:
		Array(void);
		Array(unsigned int s);
		Array(Array const &array);
		~Array() ;
		Array & operator= (Array const & ary);
		T &operator[](int i);
		unsigned int getsize(void) const ;
		T getstoragepos(int x) const ;
		T *getstoragepointer(void) const;
	
	private:
		unsigned int size;
		T * storage;
		
		void OutofBoundsException(void) const;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T> &f);

#endif