/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 15:16:25 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::m_bits_frac = 8;

Fixed::Fixed()
{
	m_virg_fix = 0;
	std::cout << "Default constructor called." << std::endl;
}

//this->m_virg_fix = input << this->m_bits_frac = on multiplie l'input par 2^m_bits_frac -> on stock l;int en le convertissant en virgule fixe
Fixed::Fixed(const int input)
{
	std::cout << "Int Constructor called" << std::endl;
	this->m_virg_fix = input << this->m_bits_frac;
}

//this->m_virg_fix = roundf(input * (1 << this->m_bits_frac)) = on stock le float en le convertissant en virgule fixe
Fixed::Fixed(const float input)
{
	std::cout << "Float Constructor called" << std::endl;
	this->m_virg_fix = roundf(input * (1 << this->m_bits_frac));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

//on fait l4inverse pour recuperer la valeur du float
float Fixed::toFloat(void) const
{
	float a;

	a = (float)this->m_virg_fix / (float)(1 << this->m_bits_frac);
	return (a);
}

//on fait l4inverse pour recuperer la valeur de l4int
int	Fixed::toInt(void) const
{
	return (this->m_virg_fix >> this->m_bits_frac);
}

int Fixed::getRawBits(void) const
{
	return (this->m_virg_fix);
}

void Fixed::setRawBits(int const raw)
{
	this->m_virg_fix = raw;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->m_virg_fix = src.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}
