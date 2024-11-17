#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <vector>

class Zombie
{
	private:
	
		std::string Name;
	public:
		void announce(void);
		void setName(std::string name);
		Zombie();
		Zombie(std::string name);
		~Zombie();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif 
