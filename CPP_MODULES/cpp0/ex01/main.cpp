#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone_book;
	std::cout << "Welcome To Virtual Phone Book:" << std::endl;
	while (!std::cin.eof())
	{
		std::string input;
		std::cout << std::endl
				  << "Please Enter a command: ADD | SEARCH | EXIT: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phone_book.ADD();
		if (input == "SEARCH")
			phone_book.SEARCH();
		if (input == "EXIT")
			return 0;
	}
}
