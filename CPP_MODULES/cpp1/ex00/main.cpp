#include "Zombie.hpp"
int main()
{
	Zombie *zombie2;
	
	zombie2 = newZombie("heap");
	zombie2->announce();
	randomChump("stack");

	delete zombie2;

}