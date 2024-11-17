#include "HumanB.hpp"

void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their " << "ottoman slap" << std::endl;

}
HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}


void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}