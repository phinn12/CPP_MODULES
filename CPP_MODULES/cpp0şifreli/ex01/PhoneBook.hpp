#include <iostream>
#include <iomanip>
#include <vector>
#include "Contact.hpp"

class PhoneBook
{
private:
	int rsize;
	int isize;
	Contact People[8];
	std::string SetLen(std::string str);
	std::string password;
public:

	void ADD();
	void SEARCH();
	PhoneBook();
	void PASSWORD();
};
