/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 15:58:20 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called." << std::endl;
	this->m_attackdamage = 20;
	this->m_stamina = 50;
	this->m_health = 100;
	this->m_name = "No set name";
	m_guarding_gate = false;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Name constructor called." << std::endl;
	this->m_attackdamage = 20;
	this->m_stamina = 50;
	this->m_health = 100;
	this->m_name = name;
	m_guarding_gate = false;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->m_attackdamage = src.m_attackdamage;
		this->m_health = src.m_health;
		this->m_name = src.m_name;
		this->m_stamina = src.m_stamina;
		this->m_guarding_gate = src.m_guarding_gate;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->m_stamina <= 0 || this->m_health <= 0)
	{
		std::cout << "ScavTrap No more energy / health to attack." << std::endl;
		return ;
	}
	this->m_stamina--;
	std::cout << "ScavTrap " << this->m_name << " attacks " << target << " causing ";
	std::cout << this->m_attackdamage << " points of damage!" << std::endl;
	std::cout << "ScavTrap " << this->m_name << " has " << this->m_stamina << " energy point(s)." << std::endl;;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->m_name << " is now in Gate keeper mode." << std::endl;
	m_guarding_gate = true;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}
