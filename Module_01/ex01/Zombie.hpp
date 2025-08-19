/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:09:00 by lbenatar          #+#    #+#             */
/*   Updated: 2025/02/28 13:46:37 by lbenatar         ###   ########.fr       */
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

    Zombie();
    void announce(void);
    void assignName(std::string nom);
    ~Zombie();

    private:

    std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
