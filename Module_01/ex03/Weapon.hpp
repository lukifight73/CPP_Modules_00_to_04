/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:13:18 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/10 16:13:36 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>

class Weapon
{
    public:

    Weapon(std::string nom);
    const  std::string &getType(void) const;
    void setType(std::string nom);
    ~Weapon();

    private:

    std::string type;
};

#endif
