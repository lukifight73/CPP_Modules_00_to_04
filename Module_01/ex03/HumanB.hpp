/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:13:14 by lbenatar          #+#    #+#             */
/*   Updated: 2025/02/28 14:47:52 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include "Weapon.hpp"

class HumanB
{
    public:

    HumanB(std::string nom);
    void attack(void);
    void setWeapon(Weapon &weapon);
    ~HumanB();

    private:

    std::string name;
	bool have_weapon;
	Weapon *weapon;
};

#endif
