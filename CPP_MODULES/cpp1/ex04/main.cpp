#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "You need to give arguments like this: ./replace <filename> <find> <replace>" << std::endl;
		return (0);
	}
	std::ifstream file(av[1]);
	if (!file.is_open())
	{
		std::cout << "ERROR:" << av[1] << " is not an openable file!" << std::endl;
		return (0);
	}
	std::ofstream result(std::string(av[1]) + ".replace");
	if (!result.is_open())
	{
		std::cout << "ERROR:" << std::string(av[1]) + ".replace" << "couldn't be opened!" << std::endl;
		return (0);
	}
	std::string string;
	while (std::getline(file, string))
	{
		result << ft_replace(string, av[2], av[3]);
		if (file.peek() != EOF)
			result << std::endl;
	}
	return (1);
}
