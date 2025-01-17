#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

// includes
#include <iostream>
#include <string>

//classes
class Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	phone_number;
		std::string	secret;

		Contact(void);
		~Contact(void);
};

class PhoneBook
{
	public:
		Contact	contact1;
		Contact	contact2;
		Contact	contact3;
		Contact	contact4;
		Contact	contact5;
		Contact	contact6;
		Contact	contact7;
		Contact	contact8;
		int		contact_num = 1;

		PhoneBook(void);
		~PhoneBook(void);

		void	add_contact(Contact contact);
		void	search(void);
};

#endif