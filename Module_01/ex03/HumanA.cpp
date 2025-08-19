/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:21:37 by lbenatar          #+#    #+#             */
/*   Updated: 2025/02/28 14:48:51 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string nom, Weapon &weapon_name): weapon(weapon_name)
{
	name = nom;
	std::cout << name <<" joined the battlefield with " << weapon.getType() << std::endl;
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << name <<" died." << std::endl;
}
