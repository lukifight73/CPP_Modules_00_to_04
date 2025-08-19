/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/25 13:56:00 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called." << std::endl;
	m_type = "Identite confuse";
}

WrongAnimal::WrongAnimal(std::string name)
{
	std::cout << "WrongAnimal Name constructor called." << std::endl;
	m_type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->m_type = src.m_type;
	}
	return (*this);
}

std::string WrongAnimal::getType(void)const
{
	return (m_type);
}

void WrongAnimal::makeSound(void)const
{
	if (m_type == "Dog")
		std::cout << "Woaf Woafffffff" << std::endl;
	else if (m_type == "WrongCat")
		std::cout << "Wrong cat > Mzizazozuzuzuzuzzzuzuzuzuzuzuzuzzzzz" << std::endl;
	else
		std::cout << "Wrong animal > I'w soww wrowwwg" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called." << std::endl;
}
