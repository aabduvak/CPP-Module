/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:27:24 by aabduvak          #+#    #+#             */
/*   Updated: 2022/08/03 01:35:12 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Caster.hpp"

Caster::Caster(std::string n_str): input(n_str)
{
	this->input_type = identify_type(n_str);
	return;
}

Caster::~Caster()
{
	return;
}

int	Caster::identify_type(std::string str)
{
	int result_type;
	int i;
	int dot;

	i = 1;
	dot = 0;
	result_type = ERROR_TYPE;
	if (str.length() == 1 && !!isascii(str[0]) == 1 && !!isdigit(str[0]) != 1)
	{
		return CHAR_TYPE;
	}
	if (str[0] == '-' || !!isdigit(str[0]) == 1)
	{
		result_type = INT_TYPE;
		while (!!isdigit(str[i]) || str[i] == '.' )
		{
			if (str[i] == '.')
			{
				if (dot != 0 && str[i] == '.')
					return ERROR_TYPE;
				result_type = DOUBLE_TYPE;
				dot++;
			}
			i++;
		}
		if ((str[i] == 'f' || str[i] == 'F') && result_type == DOUBLE_TYPE)
			if (str[i - 1] == '.')
				result_type = ERROR_TYPE;
			else
				result_type = FLOAT_TYPE;
		else if (str[i] != '\0' || str[i - 1] == '.' || (result_type == FLOAT_TYPE && str[i + 1] != '\0'))
			result_type = ERROR_TYPE;
			
	}
	return result_type;
}

void Caster::display_char(void)
{
	int value;

	value = atoi(this->input.c_str());
	if (this->input_type == ERROR_TYPE)
		std::cout<< "Char : imposible" <<std::endl;
	else if (this->input_type == CHAR_TYPE)
		std::cout<< "Char : " << static_cast<char>(this->input[0]) <<std::endl;
	else
	{
		if (value >= 32 && value <= 127)
			std::cout<< "Char : \'"<< static_cast<char>(value) << "\'" <<std::endl;
		else
			std::cout<< "Char : Non Printable" <<std::endl;
	}
}

void Caster::display_integer(void)
{
	int value;
	double value_2;
	
	value = atoi(this->input.c_str());
	value_2 = atof(this->input.c_str());
	if (this->input_type == ERROR_TYPE)
		std::cout<< "Int : imposible" <<std::endl;
	else if (this->input_type == CHAR_TYPE)
		std::cout<< "Int : "<< static_cast<int>(this->input[0]) <<std::endl;
	else
	{
		if ( value_2 < std::numeric_limits<int>::min() || value_2 > std::numeric_limits<int>::max() )
			std::cout<< "Int : overlimit " <<std::endl;
		else 
			std::cout<< "Int : " << static_cast<int>(value) <<std::endl;
	}
}

int Caster::float_inff(void)
{
	std::string n_str;
	float x;
	char * e;

	n_str = this->input;
	if (this->input_type == FLOAT_TYPE)
		n_str.pop_back();
	x = (float)strtod(n_str.c_str(),&e);
	if (*e != '\0')
		return 2;
	if ( x < std::numeric_limits<float>::lowest())
		return -1;
	if (x > std::numeric_limits<float>::max())
		return 1;
	return 0;
}

void Caster::display_float(void)
{
	float value;
	
	value = atof(this->input.c_str());
	if (this->input_type == ERROR_TYPE)
		std::cout<< "Float : nanf" <<std::endl;
	else if (this->input_type == CHAR_TYPE)
		std::cout<< "Float : "<< static_cast<float>(this->input[0]) << ".0f" <<std::endl;
	else
	{
		if (float_inff() != 0)
		{
			if (float_inff() == 1)
				std::cout<< "Float : +inff " <<std::endl;
			else if (float_inff() == -1)
				std::cout<< "Float : -inff " <<std::endl;
			else
				std::cout<< "Float : error (HOW?)" <<std::endl;
		}
		else 
			if (value == floor(value))
				std::cout<< "Float : "<< static_cast<float>(value) << ".0f"<<std::endl;
			else
			 	std::cout<< "Float : "<< static_cast<float>(value) << "f"<<std::endl;
	}
}

int Caster::double_inff(void)
{
	std::string n_str;
	double x;
	char * e;

	n_str = this->input;
	if (this->input_type == FLOAT_TYPE)
		n_str.pop_back();
	x = strtod(n_str.c_str(),&e);
	if (*e != '\0')
		return 2;
	if ( x < std::numeric_limits<double>::lowest())
		return -1;
	if (x > std::numeric_limits<double>::max())
		return 1;
	return 0;
}

void Caster::display_double(void)
{
	double value;

	value = atof(this->input.c_str());
	if (this->input_type == ERROR_TYPE)
		std::cout<< "Double : nan" <<std::endl;
	else if (this->input_type == CHAR_TYPE)
		std::cout<< "Double : "<< static_cast<double>(this->input[0]) << ".0" <<std::endl;
	else
	{
		if (double_inff() != 0)
		{
			if (double_inff() == 1)
				std::cout<< "Double : +inff " <<std::endl;
			else if (double_inff() == -1)
				std::cout<< "Double : -inff " <<std::endl;
			else
				std::cout<< "Double : error (HOW?)" <<std::endl;
		}
		else 
			if (value == floor(value))
				std::cout<< "Double : "<< static_cast<double>(value) << ".0"<<std::endl;
			else
			 	std::cout<< "Double : "<< static_cast<double>(value) << std::endl;
	}
}

void Caster::show(void)
{	
	this->display_char();
	this->display_integer();
	this->display_float();
	this->display_double();
}
