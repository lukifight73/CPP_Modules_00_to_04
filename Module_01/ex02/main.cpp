/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:08:50 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/10 16:08:28 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "The memory address of the string variable : \t" << &string << "." << std::endl;
	std::cout << "The memory address held by stringPTR : \t\t" << stringPTR << "." << std::endl;
	std::cout << "The memory address held by stringREF : \t\t" << &stringREF << "." << std::endl << std::endl;

	std::cout << "The value of the string variable : \t\t" << string << "." << std::endl;
	std::cout << "The value pointed to by stringPTR : \t\t" << *stringPTR << "." << std::endl;
	std::cout << "The value pointed to by stringREF : \t\t" << stringREF << "." << std::endl;

}
