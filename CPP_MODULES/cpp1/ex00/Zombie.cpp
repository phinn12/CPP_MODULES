#include "Zombie.hpp"


Zombie::Zombie()
{
	Name = "";
}

Zombie::Zombie(std::string name)
{
	Name = name;
}

void Zombie::setName(std::string name)
{
	Name = name;
}

void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie()
{
	std::cout << Name << " is dead" << std::endl;
}