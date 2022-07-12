/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:42:57 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/10 17:14:29 by aabduvak         ###   ########.fr       */
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
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed& operator=(Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
};

#endif