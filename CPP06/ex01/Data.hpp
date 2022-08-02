/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:41:46 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:42:29 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iomanip>
# include <iostream>

class Data
{
	public:
		Data(std::string name);
		~Data();
		
		void hello(void);
	private:
		std::string name;
		
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif