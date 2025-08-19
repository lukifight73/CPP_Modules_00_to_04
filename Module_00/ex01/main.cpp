/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:34:25 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/06 09:58:18 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook 	PhoneBook;
    std::string input = "";

    while (input != "EXIT")
	{
		std::cout << "Veuillez entrer ADD pour ajouter un contact." << std::endl;
		std::cout << "Veuillez entrer SEARCH pour chercher un contact." << std::endl;
        std::cout << "Veuillez entrer EXIT pour sortir du programme." << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ctrl D. Exiting phonebook now." << std::endl;
			std::exit(0);
		}
		if (input == "ADD")
            PhoneBook.ajouterContact();
        else if (input == "SEARCH")
            PhoneBook.afficherContacts();
        else if (input != "EXIT")
        {
            std::cout << "Je n'ai pas compris... Merci de saisir a nouveau." << std::endl << std::endl;
        }
	}
    return 0;
}
