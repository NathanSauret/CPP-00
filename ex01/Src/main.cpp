/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsauret <nsauret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:02:17 by nsauret           #+#    #+#             */
/*   Updated: 2025/02/03 14:02:18 by nsauret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/includes.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << std::endl;

	while (1)
	{
		clear();
		std::cout << "                    ~PHONEBOOK v0.42~" << std::endl;
		std::cout << std::endl;
		std::cout << "please enter a command:" << std::endl;
		std::cout << "- ADD (add a contact)" << std::endl;
		std::cout << "- SEARCH (display the contacts and search for a specific contact)" << std:: endl;
		std::cout << "- EXIT (exit the program and forget everything cuz lol why not)" << std::endl;
		std::cout << std::endl;

		std::getline(std::cin, input);
		if (std::cin.eof()==1)
			std::exit(1);
		if (input.compare("ADD") == 0)
			phonebook.add_contact();
		else if (input.compare("SEARCH") == 0)
			phonebook.search();
		else if (input.compare("EXIT") == 0)
			break ;
	}

	clear();

	return (0);
}