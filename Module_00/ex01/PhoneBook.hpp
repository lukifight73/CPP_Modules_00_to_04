#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
    public:

    PhoneBook();
	void constructorPhoneBook(void);
    void ajouterContact(void);
    void afficherContacts(void);
    ~PhoneBook();

    private:
    Contact repertoire[8];
    int	m_nb_contact;
};

#endif
