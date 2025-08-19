/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:09:00 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/10 16:04:32 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>

class Zombie
{
    public:

    Zombie(std::string name = "");
    void announce(void);
    ~Zombie();

    private:

    std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
