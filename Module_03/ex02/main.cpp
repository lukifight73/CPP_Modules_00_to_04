/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:39 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 16:01:10 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	k.attack("Le P");

	std::cout << std::endl << "------------------------------" << std::endl << std::endl;

	FragTrap f("le L");

	f.attack("Lucas");
	f.takeDamage(1);
	f.takeDamage(3);
	f.beRepaired(2);
	f.highFivesGuys();
	f.takeDamage(100);
	f.beRepaired(1);
	f.attack("Le K");

	return 0;
}
