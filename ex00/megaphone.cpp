#include <iostream>

static char	*to_upper(char *in)
{
	char	*out;
	int		i = 0;

	out = in;
	while (in[i])
	{
		if (in[i] >= 'a' && in[i] <= 'z')
			out[i] -= 32;
		i++;
	}
	return (out);
}

int main(int argc, char *argv[])
{
	int	i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			std::cout << to_upper(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}

	return (0);
}