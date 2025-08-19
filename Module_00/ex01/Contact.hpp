#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>

class Contact
{
    public:

    Contact();
    void afficherAllContact(int i);
    void afficherContact(void);
    void createContact();
    void constructorContact(void);
    ~Contact();

    private:

    std::string m_numero;
    std::string m_family;
    std::string m_name;
	std::string m_nickname;
	std::string m_secret;
};

#endif
