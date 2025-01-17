#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

// includes
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include "classes.hpp"

// functions
void		clear(void);
int			is_space(int input);
int			is_only_numbers(std::string input);
std::string	norm_string_for_search(std::string input);

#endif