/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/25 13:56:00 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal()
{
	std::cout << "Animal Default constructor called." << std::endl;
	m_type = "Identite confuse";
}

Animal::Animal(std::string name)
{
	std::cout << "Animal Name constructor called." << std::endl;
	m_type = name;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->m_type = src.m_type;
	}
	return (*this);
}

std::string Animal::getType(void)const
{
	return (m_type);
}

void Animal::makeSound(void)const
{
	std::cout << "What the fuck am I ?" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called." << std::endl;
}
