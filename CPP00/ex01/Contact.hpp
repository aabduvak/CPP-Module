/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:20:41 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/03 16:24:09 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:
    int         index;
    static std::string	fields_name[5];
	std::string			informations[5];

	enum Field {
		FirstName = 0,
		LastName,
		Nickname,
		Phone,
        Secret
	};
    
public:
    Contact();
    ~Contact();
    
    bool	set_informations(int index);
	void	display_header(void);
	void	display(void);
};

#endif