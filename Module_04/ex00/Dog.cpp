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
#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default constructor called." << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->m_type = src.m_type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
}
