/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base_B.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:52:31 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:53:14 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_B_HPP
# define BASE_B_HPP

# include "Base.hpp"

class Base_B : public Base
{
	public:
		Base_B();
		~Base_B();
		void info(void) const;
};

#endif