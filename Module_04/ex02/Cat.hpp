/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                       :+:      :+:    :+:   */
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

class Cat: public Animal
{
	public:

	Cat();
	Cat(std::string name);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &src);
	virtual void makeSound(void)const;
	~Cat();

	private:

	Brain *m_brain;
};
