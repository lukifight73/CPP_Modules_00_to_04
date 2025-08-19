/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:39 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 15:23:00 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"


int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "Max entre a et b : " << Fixed::max(a, b) << std::endl;
	std::cout << "Min entre a et b : " << Fixed::min(a, b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a * b : " << (a * b) << std::endl;
	std::cout << "a / b : " << (a / b) << std::endl;
	std::cout << "a - b : " << (a - b) << std::endl;
	std::cout << "a + b : " << (a + b) << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;

	return 0;
}
