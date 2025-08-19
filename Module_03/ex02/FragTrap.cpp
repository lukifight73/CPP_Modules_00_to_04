/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 15:59:48 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called." << std::endl;
	this->m_attackdamage = 30;
	this->m_stamina = 100;
	this->m_health = 100;
	this->m_name = "No set name";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Name constructor called." << std::endl;
	this->m_attackdamage = 30;
	this->m_stamina = 100;
	this->m_health = 100;
	this->m_name = name;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->m_attackdamage = src.m_attackdamage;
		this->m_health = src.m_health;
		this->m_name = src.m_name;
		this->m_stamina = src.m_stamina;
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->m_stamina <= 0 || this->m_health <= 0)
	{
		std::cout << "FragTrap No more energy / health to attack." << std::endl;
		return ;
	}
	this->m_stamina--;
	std::cout << "FragTrap " << this->m_name << " attacks " << target << " causing ";
	std::cout << this->m_attackdamage << " points of damage!" << std::endl;
	std::cout << "FragTrap " << this->m_name << " has " << this->m_stamina << " energy point(s)." << std::endl;;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->m_name << " asks for high fives ! High Fives ???????" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called." << std::endl;
}
