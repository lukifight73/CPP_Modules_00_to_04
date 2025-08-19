/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:55 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/25 13:45:39 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog: public Animal
{
	public:

	Dog();
	Dog(std::string name);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &src);
	virtual void makeSound(void)const;
	~Dog();

	private:

	Brain *m_brain;
};
