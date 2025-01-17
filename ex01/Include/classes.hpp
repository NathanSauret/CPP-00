#ifndef	CLASSES_HPP
#define	CLASSES_HPP

#include "phonebook.hpp"

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		Contact	add_contact(void);
		void	display_contact_line(int i);
		void	display_contact(void);
		int		does_contact_exist(void);

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	phone_number;
		std::string	secret;
};

class PhoneBook
{
	public:
		Contact	contact[8];
		int		contact_num = 0;

		PhoneBook(void);
		~PhoneBook(void);

		void	add_contact(void);
		void	search(void);
};

#endif