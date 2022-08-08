/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:31:10 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/08 11:50:18 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include<iomanip>
# include<iostream>

class Span
{
	private:
	//Variables
	int *storage;
	unsigned int size;
	unsigned int filled;
	
	//Exceptions
	void OutofBoundsException(void) const;
	void StorageFullException(void) const;
	void StorageNotFullEnought(void) const;

	public:
	Span();
	Span(unsigned int s);
	Span(Span &spn);
	~Span();
	Span &operator=(const Span &spn);

	//Functions
	void addNumber(int x);
	int shortestSpan(void);
	int longestSpan(void);
	
	//Getters
	unsigned int getsize() const;
	int getstoredValue(unsigned int i) const;
};

//Output
std::ostream& operator<<(std::ostream& os, const Span &sp);

#endif