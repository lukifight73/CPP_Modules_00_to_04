/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:46 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 15:17:38 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::m_bits_frac = 8;

Fixed::Fixed()
{
	m_virg_fix = 0;
	//std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const int input)
{
	//std::cout << "Int Constructor called" << std::endl;
	this->m_virg_fix = input << this->m_bits_frac;
}

Fixed::Fixed(const float input)
{
	//std::cout << "Float Constructor called" << std::endl;
	this->m_virg_fix = roundf(input * (1 << this->m_bits_frac));
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called." << std::endl;
	*this = copy;
}

float Fixed::toFloat(void) const
{
	float a;

	a = (float)this->m_virg_fix / (float)(1 << this->m_bits_frac);
	return (a);
}

int	Fixed::toInt(void) const
{
	return (this->m_virg_fix >> this->m_bits_frac);
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->m_virg_fix);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->m_virg_fix = raw;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->m_virg_fix = src.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed src) const
{
	return (this->toFloat() > src.toFloat());
}

bool Fixed::operator<(Fixed src) const
{
	return (this->toFloat() < src.toFloat());
}

bool Fixed::operator==(Fixed src) const
{
	return (this->toFloat() == src.toFloat());
}

bool Fixed::operator!=(Fixed src) const
{
	return (this->toFloat() != src.toFloat());
}

bool Fixed::operator<=(Fixed src) const
{
	return (this->toFloat() <= src.toFloat());
}

bool Fixed::operator>=(Fixed src) const
{
	return (this->toFloat() >= src.toFloat());
}

Fixed Fixed::operator+(const Fixed src) const
{
	return (this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(const Fixed src) const
{
	return (this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(const Fixed src) const
{
	return (this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(const Fixed src) const
{
	return (this->toFloat() / src.toFloat());
}

Fixed Fixed::operator++()
{
	this->m_virg_fix++;
	return (*this);
}

Fixed Fixed::operator--()
{
	this->m_virg_fix--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;

	++this->m_virg_fix;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;

	--this->m_virg_fix;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called." << std::endl;
}
