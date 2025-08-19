/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/25 14:00:59 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <cstddef>
#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default constructor called." << std::endl;
	m_brain = new Brain;
}

Dog::Dog(const Dog &copy): Animal(copy), m_brain(NULL)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	delete m_brain;
	m_brain = new Brain(*copy.m_brain);
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		m_type = src.m_type;
		delete m_brain;
		m_brain = new Brain(*src.m_brain);
	}
	return (*this);
}

void Dog::makeSound(void)const
{
	std::cout << "Woaaaaaffffff" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
	delete m_brain;
}
