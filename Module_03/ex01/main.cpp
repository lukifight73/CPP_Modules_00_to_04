/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:39 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 15:55:22 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap p("Le P");

	p.attack("Lucas");
	p.takeDamage(1);
	p.takeDamage(3);
	p.beRepaired(2);
	p.takeDamage(15);
	p.beRepaired(5);
	p.attack("Lucas");

	std::cout << std::endl << "------------------------------" << std::endl << std::endl;

	ScavTrap k("le K");

	k.attack("Lucas");
	k.takeDamage(1);
	k.takeDamage(3);
	k.beRepaired(2);
	k.guardGate();
	k.takeDamage(100);
	k.beRepaired(1);
	k.attack("Le K");

	return 0;
}
