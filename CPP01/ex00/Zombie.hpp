/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 02:02:52 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 03:25:10 by aabduvak         ###   ########.fr       */
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
};

Zombie* newZombie(std::string name); 
void randomChump(std::string name);

#endif