/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/25 14:52:59 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include <string>

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->m_type = src.m_type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called." << std::endl;
}
