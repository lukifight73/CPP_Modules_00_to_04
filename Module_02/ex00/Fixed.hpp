/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:55 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/26 15:24:52 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	public:

	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed &operator=(const Fixed &src);

	private:

	int	m_virg_fix;
	static const int	m_bits_frac;
};
