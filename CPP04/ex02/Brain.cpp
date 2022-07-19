/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:49:24 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/19 02:51:10 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain created"<<std::endl;
	for (int i = 0;i < 100 ; i++)
		this->ideas[i] = "";
	return;
}

Brain::~Brain()
{
	std::cout<<"Brain destroyed"<<std::endl;
	return;
}

std::string Brain::getIdea(int index)
{
	return(this->ideas[index]);
}
