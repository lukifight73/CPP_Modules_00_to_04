/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:55 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 15:25:02 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	public:

	Fixed();
	Fixed(const int entier);
	Fixed(const float entier);
	Fixed(const Fixed &copy);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int	toInt(void) const;
	float	toFloat(void) const;
	Fixed &operator=(const Fixed &src);
	bool operator>(Fixed src) const;
	bool operator<(Fixed src) const;
	bool operator>=(Fixed src) const;
	bool operator<=(Fixed src) const;
	bool operator==(Fixed src) const;
	bool operator!=(Fixed src) const;
	Fixed operator+(Fixed src) const;
	Fixed operator-(Fixed src) const;
	Fixed operator*(Fixed src) const;
	Fixed operator/(Fixed src) const;
	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static const Fixed	&max(const Fixed &first, const Fixed &second);
	static const Fixed	&min(const Fixed &first, const Fixed &second);
	static Fixed	&max(Fixed &first, Fixed &second);
	static Fixed	&min(Fixed &first, Fixed &second);

	private:

	int	m_virg_fix;
	static const int	m_bits_frac;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);
