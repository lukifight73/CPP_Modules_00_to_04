/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:08:57 by lbenatar          #+#    #+#             */
/*   Updated: 2025/02/28 13:53:19 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
		return NULL;

	Zombie* zomb = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zomb[i].assignName(name);
	}
	return (zomb);
}
