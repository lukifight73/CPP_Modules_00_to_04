/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:55 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/25 14:53:18 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat: public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(std::string name);
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &src);
	~WrongCat();

	private:

};
