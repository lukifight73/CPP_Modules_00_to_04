/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/25 14:48:02 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called." << std::endl;
	m_attackdamage = 0;
	m_stamina = 10;
	m_health = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Name constructor called." << std::endl;
	m_attackdamage = 0;
	m_stamina = 10;
	m_health = 10;
	m_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
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

void ClapTrap::attack(const std::string& target)
{
	if (this->m_stamina <= 0 || this->m_health <= 0)
	{
		std::cout << "ClapTrap No more energy / health to attack." << std::endl;
		return ;
	}
	this->m_stamina--;
	std::cout << "ClapTrap " << this->m_name << " attacks " << target << " causing ";
	std::cout << this->m_attackdamage << " points of damage!" << std::endl;
	std::cout << "ClapTrap " << this->m_name << " has " << this->m_stamina << " energy point(s)." << std::endl;;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->m_health <= 0)
	{
		std::cout << "ClapTrap No more health." << std::endl;
		return ;
	}
	this->m_health -= amount;
	std::cout << "ClapTrap " << this->m_name << " took " << amount << " point of damage. ";
	if (this->m_health < 0)
		this->m_health = 0;
	std::cout << "He now has " << this->m_health << " health!" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->m_stamina <= 0 || this->m_health <= 0)
	{
		std::cout << "ClapTrap No more energy / health to repair oneself." << std::endl;
		return ;
	}
	this->m_health += amount;
	this->m_stamina--;
	std::cout << "ClapTrap " << this->m_name << " repaired himself. ";
	std::cout << "He now has " << this->m_health << " health!" << std::endl;
	std::cout << "ClapTrap " << this->m_name << " has " << this->m_stamina << " energy point(s)." << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called." << std::endl;
}
