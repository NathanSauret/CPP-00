#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include <string>

class Contact
{
	public:
		Contact	add_contact(void);
		void	display_contact_line(int i);
		void	display_contact(void);
		int		does_contact_exist(void);

		Contact(void);
		~Contact(void);

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	phone_number;
		std::string	secret;
};

#endif