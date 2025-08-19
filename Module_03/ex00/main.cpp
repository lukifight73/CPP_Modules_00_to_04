/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:39 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 15:49:00 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

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

	return 0;
}
