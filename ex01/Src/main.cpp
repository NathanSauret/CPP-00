#include "classes.hpp"

void	add_contact(PhoneBook phonebook)
{
	Contact	contact;

	if (phonebook.contact_num > 8)
		phonebook.contact_num = 1;
	switch(phonebook.contact_num)
	{
		case(1):
			contact = phonebook.contact1;
		case(2):
			contact = phonebook.contact2;
		case(3):
			contact = phonebook.contact3;
		case(4):
			contact = phonebook.contact4;
		case(5):
			contact = phonebook.contact5;
		case(6):
			contact = phonebook.contact6;
		case(7):
			contact = phonebook.contact7;
		case(8):
			contact = phonebook.contact8;
	}

	phonebook.add_contact(contact);
	phonebook.contact_num++;
}

int	main(void)
{
	PhoneBook	phonebook;

	add_contact(phonebook);

	std::cout << std::endl;
	std::cout << "First name: " << phonebook.contact1.first_name << std::endl;
	std::cout << "Last name: " << phonebook.contact1.last_name << std::endl;
	std::cout << "Phone number: " << phonebook.contact1.phone_number << std::endl;
	std::cout << "Darkest secret: " << phonebook.contact1.secret << std::endl;
	std::cout << std::endl;

	return (0);
}