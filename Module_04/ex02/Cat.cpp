/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/25 14:00:59 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat()
{
	m_type = "cat";
	std::cout << "Cat Default constructor called." << std::endl;
	m_brain = new Brain;
}

Cat::Cat(const Cat &copy): Animal(copy), m_brain(NULL)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	delete m_brain;
	m_brain = new Brain(*copy.m_brain);
}

Cat &Cat::operator=(const Cat &src)
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

void Cat::makeSound(void)const
{
	std::cout << "Miaouuuuuuuuuuu" << std::endl;
}

Cat::~Cat()
{
	delete m_brain;
	std::cout << "Cat Destructor called." << std::endl;
}
