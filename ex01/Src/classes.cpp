#include "classes.hpp"

// PhoneBook's constructor
PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook's constructor called" << std::endl;
	return;
}

// PhoneBook's destructor
PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook's destructor called" << std::endl;
	return;
}

// add_contact member attribute
void	PhoneBook::add_contact(Contact contact)
{
	std::cout << "First name: ";
	std::cin >> contact.first_name;

	std::cout << "Last name: ";
	std::cin >> contact.last_name;

	std::cout << "Phone number: ";
	std::cin >> contact.phone_number;

	std::cout << "Darkest secret: ";
	std::cin >> contact.secret;
}





// Contact's constructor
Contact::Contact(void)
{
	std::cout << "Contact's constructor called" << std::endl;
	return;
}

// Contact's destructor
Contact::~Contact(void)
{
	std::cout << "Contact's destructor called" << std::endl;
	return;
}