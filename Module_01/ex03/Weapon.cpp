/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:27:58 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/10 16:13:19 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string nom)
{
	type = nom;
}

void Weapon::setType(std::string nom)
{
	type = nom;
}

const std::string &Weapon::getType(void) const
{
	return (type);
}


Weapon::~Weapon()
{
}
