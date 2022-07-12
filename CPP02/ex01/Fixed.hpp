/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:15:59 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/13 00:18:21 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int number;
		const static int frac;

	public:
		Fixed();
		Fixed(int number);
		Fixed(float number);
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed& operator=(const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream& os, const Fixed &f); //, const Fixed &f

#endif