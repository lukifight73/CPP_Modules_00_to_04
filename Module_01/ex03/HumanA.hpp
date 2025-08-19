/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:13:10 by lbenatar          #+#    #+#             */
/*   Updated: 2025/02/28 14:52:50 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include "Weapon.hpp"

class HumanA
{
    public:

    HumanA(std::string nom, Weapon &weapon_name);
    void attack(void);
    ~HumanA();

    private:

    std::string name;
	Weapon &weapon;
};

#endif
