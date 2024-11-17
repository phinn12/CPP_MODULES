
#include <iostream>

int main(int ac, char **av)
{

	if(ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i;
		for(i = 1; i < ac; i++)
		{
			std::string arg = av[i];
			unsigned int j;
			for(j  = 0; j < arg.length(); j++)
				arg[j] = std::toupper(arg[j]);
			std::cout << arg;
			if (i + 1 < ac)
				std::cout << ' ';
		}
		std::cout << std::endl;
	}
}
