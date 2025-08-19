#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact()
{
	m_family = "";
	m_name = "";
	m_nickname = "";
	m_numero = "";
	m_secret = "";
}

Contact::~Contact()
{
	m_family.clear();
	m_name.clear();
	m_nickname.clear();
	m_secret.clear();
	m_numero.clear();
}

void Contact::createContact()
{
	if (m_family != "")
	{
		m_family.clear();
		m_name.clear();
		m_nickname.clear();
		m_secret.clear();
		m_numero.clear();
		m_family = "";
		m_name = "";
		m_nickname = "";
		m_numero = "";
		m_secret = "";
	}
	while (m_family == "")
	{
		std::cout << "Veuillez entrer le nom du nouveau contact" << std::endl;
		std::getline(std::cin, m_family);
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			std::exit(0);
		}
		if (m_family == "")
			std::cout << "Ne rien remplir est inacceptable." << std::endl;
	}
	while (m_name == "")
	{
		std::cout << "Veuillez entrer le prenom du nouveau contact" << std::endl;
		std::getline(std::cin, m_name);
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			std::exit(0);
		}
		if (m_name == "")
			std::cout << "Ne rien remplir est inacceptable." << std::endl;
	}
	while (m_nickname == "")
	{
		std::cout << "Veuillez entrer le surnom du nouveau contact" << std::endl;
		std::getline(std::cin, m_nickname);
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			std::exit(0);
		}
		if (m_nickname == "")
			std::cout << "Ne rien remplir est inacceptable." << std::endl;
	}
	while (m_numero == "")
	{
		std::cout << "Veuillez entrer le numero du nouveau contact" << std::endl;
		std::getline(std::cin, m_numero);
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			std::exit(0);
		}
		if (m_numero == "")
			std::cout << "Ne rien remplir est inacceptable." << std::endl;
	}
	while (m_secret == "")
	{
		std::cout << "Veuillez entrer le secret du nouveau contact" << std::endl;
		std::getline(std::cin, m_secret);
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			std::exit(0);
		}
		if (m_secret == "")
			std::cout << "Ne rien remplir est inacceptable." << std::endl;
	}
}

void Contact::afficherAllContact(int i)
{
	std::cout << "         " << i << "|";
	if (m_family.length() > 10)
		std::cout << m_family.substr(0, 9) << "." << "|";
	else
	{
		for (i=m_family.length() + 1; i<= 10; i++)
			std::cout << " ";
		std::cout << m_family;
		std::cout << "|";
	}
	if (m_name.length() > 10)
		std::cout << m_name.substr(0, 9) << "." << "|";
	else
	{
		for (i=m_name.length() + 1; i<= 10; i++)
			std::cout << " ";
		std::cout << m_name;
		std::cout << "|";
	}
	if (m_nickname.length() > 10)
		std::cout << m_nickname.substr(0, 9) << "." << std::endl;
	else
	{
		for (i=m_nickname.length() + 1; i<= 10; i++)
			std::cout << " ";
		std::cout << m_nickname;
		std::cout << std::endl;
	}
}

void Contact::afficherContact(void)
{
	std::cout << "Voici les informations du contact choisi :" << std::endl;
	std::cout << "Nom : " << m_family << std::endl;
	std::cout << "Prenom : " << m_name << std::endl;
	std::cout << "Surnom : " << m_nickname << std::endl;
	std::cout << "Numero : " << m_numero << std::endl;
	std::cout << "Secret : " << m_secret << std::endl << std::endl;
}
