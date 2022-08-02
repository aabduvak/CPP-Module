/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_A.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:50:53 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:51:29 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_A_HPP
# define BASE_A_HPP

# include "Base.hpp"

class Base_A : public Base
{
	public:
		Base_A();
		~Base_A();
		void info(void) const;
};

#endif