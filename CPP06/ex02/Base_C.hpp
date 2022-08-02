/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_C.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:54:36 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:55:03 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_C_HPP
# define BASE_C_HPP

# include "Base.hpp"

class Base_C : public Base
{
	public:
		Base_C();
		~Base_C();
		void info(void) const;
};

#endif