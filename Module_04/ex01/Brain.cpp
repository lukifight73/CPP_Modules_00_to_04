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

Brain::Brain()
{
	std::cout << "Brain Default constructor called." << std::endl;
	for (int i =0; i < 100; i++)
		m_table[i] = "";
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			m_table[i] = src.m_table[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called." << std::endl;
}
