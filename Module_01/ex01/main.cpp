/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:08:50 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/06 10:41:04 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zomb = zombieHorde(10, "oui");
	for (int i=0; i<10; i++)
		zomb[i].announce();
	delete[] zomb;
}
