/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:02:57 by nsauret           #+#    #+#             */
/*   Updated: 2025/02/03 14:03:00 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/includes.hpp"

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


// add a contact
void PhoneBook::add_contact(void)
{
	if (this->contact_num > 7)
		this->contact_num = 0;

	this->contact[this->contact_num] = this->contact[this->contact_num].add_contact();
	this->contact_num++;
}


// search for a contact after displaying every contacts
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