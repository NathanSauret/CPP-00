#include "../Include/phonebook.hpp"

int	is_space(int input)
{
	if (input == ' ')
		return (1);
	return (0);
}

void	clear(void)
{
	for (int i_clear=0; i_clear < 10000; i_clear++)
		std::cout << std::endl;
}

int	is_only_numbers(std::string input)
{
	int	i;

	i = 0;
	while (i < input.length())
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// to norm the strings to the 10l collumns of the member function search
std::string	norm_string_for_search(std::string input)
{
	std::string	output;

	if (input.length() > 10)
		return (input.substr(0, 9) + '.');
	if (input.length() < 10)
	{
		output = input;
		while (output.length() < 10)
		{
			output = output + ' ';
		}
		return (output);
	}
	return (input);
}