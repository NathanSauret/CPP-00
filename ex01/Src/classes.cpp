#include "../Include/phonebook.hpp"


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


// add_contact member function
Contact	Contact::add_contact(void)
{
	int			pass;
	std::string	s;

	this->first_name = "";
	this->last_name = "";
	this->phone_number = "";
	this->secret = "";

	pass = 0;
	while (!pass)
	{
		pass = 1;

		clear();
		std::cout << "please enter the informations of your contact:" << std::endl;
		std::cout << std::endl;

		std::cout << "First name: ";
		if (!this->first_name[0] && pass)
		{
			std::getline(std::cin, s);
			if (std::cin.eof()==1)
				std::exit(1);
			if (!s[0])
				pass = 0;
			else
				this->first_name = s;
		}
		else
			std::cout << this->first_name << std::endl;

		std::cout << "Last name: ";
		if (!this->last_name[0] && pass)
		{
			std::getline(std::cin, s);
			if (std::cin.eof()==1)
				std::exit(1);
			if (!s[0])
				pass = 0;
			else
				this->last_name = s;
		}
		else
			std::cout << this->last_name << std::endl;

		std::cout << "Phone number: ";
		if (!this->phone_number[0] && pass)
		{
			std::getline(std::cin, s);
			if (std::cin.eof()==1)
				std::exit(1);
			s.erase(std::remove_if(s.begin(), s.end(), is_space), s.end());
			if (!s[0] || !is_only_numbers(s))
				pass = 0;
			else
				this->phone_number = s;
		}
		else
			std::cout << this->phone_number << std::endl;

		std::cout << "Darkest secret: ";
		if (!this->secret[0] && pass)
		{
			std::getline(std::cin, s);
			if (std::cin.eof()==1)
				std::exit(1);
			if (!s[0])
				pass = 0;
			else
				this->secret = s;
		}
	}

	return (*this);
}


// display a contact
void	Contact::display_contact(void)
{
	std::string	input;

	clear();
	std::cout << "First name:     " << this->first_name << std::endl;
	std::cout << "Last name:      " << this->last_name << std::endl;
	std::cout << "Phone number:   " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
	std::cout << std::endl;
	std::cout << "press enter to exit";
	std::getline(std::cin, input);
	if (std::cin.eof()==1)
		std::exit(1);
}


// search member function of Contact
void	Contact::display_contact_line(int i)
{
	std::cout << "| " << "    " << i << "     " << " | ";
	std::cout << norm_string_for_search(this->first_name) << " | ";
	std::cout << norm_string_for_search(this->last_name) << " | ";
	std::cout << norm_string_for_search(this->phone_number) << " |";
	std::cout << std::endl;
}


int	Contact::does_contact_exist(void)
{
	if (!this->first_name[0])
		return (0);
	return (1);
}









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


void PhoneBook::add_contact(void)
{
	if (this->contact_num > 7)
		this->contact_num = 0;

	this->contact[this->contact_num] = this->contact[this->contact_num].add_contact();
	this->contact_num++;
}


void	PhoneBook::search(void)
{
	std::string	input;
	int			i;

	if (!this->contact[0].does_contact_exist())
	{
		clear();
		std::cout << "no contact to display" << std::endl;
		std::cout << "press enter to exit" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof()==1)
				std::exit(1);
		return ;
	}

	while (1)
	{
		clear();
		std::cout << "| " << "  Index   " << " | " << "First Name" << " | " << "Last name " << " | " << "Phone nbr " << " |" << std::endl;
		i = 0;
		while (i < 8)
		{
			if (!this->contact[i].does_contact_exist())
				break ;
			this->contact[i].display_contact_line(i);
			i++;
		}
		std::cout << std::endl;
		std::cout << "enter the index of the contact you want to display (must be between 0 and " << i - 1 << " or -1 to exit): ";
		std::getline(std::cin, input);
		if (std::cin.eof()==1)
				std::exit(1);
		std::cout << std::endl;
		if (input.compare("-1") == 0)
			return ;
		else if (input[0] >= '0' && input[0] <= (i - 1) + '0' && !input[1])
			this->contact[input[0] - '0'].display_contact();
	}
}