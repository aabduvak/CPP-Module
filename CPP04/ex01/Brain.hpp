/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 02:48:18 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/19 02:49:15 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iomanip>
# include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	virtual ~Brain();
	virtual std::string getIdea(int index);
};

#endif