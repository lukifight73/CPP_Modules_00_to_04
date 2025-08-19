/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:26:51 by lbenatar          #+#    #+#             */
/*   Updated: 2025/02/28 14:53:17 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string nom)
{
	name = nom;
	have_weapon = false;
	std::cout << name <<" joined the battlefield with their hands." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon_name)
{
	weapon = &weapon_name;
	have_weapon = true;
	std::cout << name << " grabbed a " << weapon->getType() << std::endl;
}

void HumanB::attack(void)
{
	if (have_weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their hands." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << name <<" died." << std::endl;
}
