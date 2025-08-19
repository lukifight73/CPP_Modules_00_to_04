/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:29:07 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/10 16:37:44 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <fstream>

std::string replace(std::string buffer, const std::string search, const std::string replace)
{
	size_t	erase_length = search.length();
	size_t	replace_length = replace.length();
	size_t	pos_search = 0;

	pos_search = buffer.find(search);
	while (pos_search != std::string::npos)
	{
		buffer.erase(pos_search, erase_length);
		buffer.insert(pos_search, replace);
		pos_search = buffer.find(search, pos_search + replace_length);
	}
	return (buffer);
}

int	main(int ac, char **av)
{
	std::string			buffer;
	std::ifstream		infile;
	std::ofstream		outfile;

	if (ac != 4)
	{
		std::cout << "Wrong number of parameters" << std::endl;
		return (1);
	}
	infile.open(av[1]);
	if (!infile.is_open())
	{
		std::cerr << "Error opening file" << std::endl;
		return (1);
	}
	std::string filename_replace = std::string(av[1]) + ".replace";
	outfile.open(filename_replace.c_str(), std::ios::out | std::ios::trunc );
    if (!outfile.is_open())
    {
        std::cerr << "Error creating replace file: " << filename_replace << std::endl;
		infile.close();
        return (1);
    }
	while (std::getline(infile, buffer))
	{
		buffer = replace(buffer, av[2], av[3]);
		outfile << buffer;
		if (infile.peek() != EOF)
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
    return (0);
}
