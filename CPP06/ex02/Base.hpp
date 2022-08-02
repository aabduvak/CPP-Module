/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:48:59 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:50:01 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
#define BASE_H

#include <iomanip>
#include <iostream>
#include <sstream>
#include <ctime>

class Base
{	
	public:
		Base();
		virtual ~Base();
		virtual void info(void) const;
};

#endif