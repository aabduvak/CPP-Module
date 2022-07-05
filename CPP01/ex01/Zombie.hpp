/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:02:52 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 03:48:44 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    
    void announce(void);
    void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif