/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:29:07 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/06 15:35:00 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;
	std::string warning = "WARNING";
	std::string debug = "DEBUG";
	std::string info = "INFO";
	std::string error = "ERROR";

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}
	harl.complain(av[1]);
    return (0);
}
