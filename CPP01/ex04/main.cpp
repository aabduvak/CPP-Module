/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:55:16 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 17:01:05 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

std::string	replace_str(std::string str, std::string s1, std::string s2)
{
	std::size_t	found;
	std::string finalstr;
	
	found = str.find(s1);
	finalstr = "";
	while (found!=std::string::npos)
	{
		finalstr.insert(finalstr.length(), str.substr(0 , found)+s2);
		str.erase(0,found + s1.length());
		found = str.find(s1);
	}
	return (finalstr + str);
}

void	read_file(std::string dir, std::string s1, std::string s2)
{
	std::string line;
	std::string final_str = "";
	std::ifstream oldfile(dir);
	
	if (oldfile.is_open())
	{
		std::ofstream newfile(dir + ".replace");
		while ( getline (oldfile,line) )
    	{
			final_str += replace_str(line, s1, s2) +"\n";
    	}
		final_str.pop_back();
		newfile << final_str;
		newfile.close();
    	oldfile.close();
  	}
	else
		std::cout << "Unable to open file" <<std::endl;
}

bool check_args(int argc, char *argv[])
{
    int         i;
    std::string s1;
    std::string s2;
    
    if (argc != 4)
        return (false);
    i = -1;
    while (++i < argc)
        if (argv[i][0] == '\0')
            return (false);
    s1 = argv[2];
    s2 = argv[3];
    if (s1 == s2)
        return (false);
    return (true);
}

int main(int argc, char *argv[])
{
    if (check_args(argc, argv))
        read_file(argv[1], argv[2], argv[3]);
    else
        std::cout << "invalid argument" << std::endl;
}