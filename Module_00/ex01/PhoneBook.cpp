#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	m_nb_contact = 0;
}

PhoneBook::~PhoneBook()
{
	m_nb_contact = 0;
}

void PhoneBook::ajouterContact(void)
{
	int	i;

	if (m_nb_contact <= 7)
	{
		m_nb_contact++;
		repertoire[m_nb_contact - 1].createContact();
	}
	else
	{
		for (i=0; i<7; i++)
			repertoire[i] = repertoire[i + 1];
		repertoire[7].createContact();
	}
}

void PhoneBook::afficherContacts(void)
{
	int	i;

	if (m_nb_contact == 0)
	{
		std::cout << "Il n'y a pas encore de contacts a afficher." << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (i=1; i<=m_nb_contact; i++)
	{
		repertoire[i - 1].afficherAllContact(i);
	}
	i = -1;
	while (i < 1 || i > m_nb_contact)
	{
		std::cout << "Veuillez entrer l'index du contact a afficher." << std::endl;
		std::cin >> i;
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			std::exit(0);
		}
		if (std::cin.fail() || i < 1 || i > m_nb_contact)
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Entrée invalide ! Merci de saisir un nombre entre 1 et " << m_nb_contact << "." << std::endl;
            i = -1;
        }
	}
	repertoire[i - 1].afficherContact();
}
