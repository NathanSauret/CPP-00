#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include "contact.hpp"

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