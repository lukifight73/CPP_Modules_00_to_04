/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:15:39 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/27 10:13:20 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* listeAnimal[10];

	listeAnimal[0] = new Dog();
	listeAnimal[1] = new Dog();
	listeAnimal[2] = new Dog();
	listeAnimal[3] = new Dog();
	listeAnimal[4] = new Dog();
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;
	listeAnimal[5] = new Cat();
	listeAnimal[6] = new Cat();
	listeAnimal[7] = new Cat();
	listeAnimal[8] = new Cat();
	listeAnimal[9] = new Cat();
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		listeAnimal[i]->makeSound();
		delete(listeAnimal[i]);
		std::cout << std::endl << "                ---------                ";
		std::cout << std::endl;
	}

	const Dog* j = new Dog();
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;
	const Cat* i = new Cat();
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;
	const Dog* k = new Dog(*j);
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;
	const Cat* l = new Cat(*i);
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;
	delete i;
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;
	delete j;
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;
	delete k;
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;
	delete l;
	std::cout << std::endl << "                ---------                ";
	std::cout << std::endl;
	return 0;
}
