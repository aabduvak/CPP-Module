/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:27:16 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:14:37 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <wchar.h>
# include <math.h>

# define ERROR_TYPE 0
# define CHAR_TYPE 1
# define INT_TYPE 2
# define FLOAT_TYPE 3
# define DOUBLE_TYPE 4

class Caster
{
private:
	std::string input;
	int input_type;
	
	int double_inff(void);
	int float_inff(void);
	int	identify_type(std::string str);
	
	void display_char(void);
	void display_integer(void);
	void display_float(void);
	void display_double(void);
public:
	Caster(std::string input);
	~Caster();
	void show(void);
};

#endif