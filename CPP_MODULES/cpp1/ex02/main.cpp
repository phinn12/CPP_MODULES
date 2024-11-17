#include "iostream"

int main()
{
	std::cout << "********************************************" << std::endl;
	std::string head = "HI THIS IS BRAIN";
	std::string *stringPTR = &head;
	std::string &stringREF = head;
	std::cout << "The address of the string: " << &head << std::endl;
    std::cout << "The address of the stringPTR: " << stringPTR << std::endl;
    std::cout << "The address of the stringREF: " << &stringREF << std::endl;
    std::cout << "********************************************" << std::endl;
    std::cout << "The value of the string: " << head << std::endl;
    std::cout << "The value of the stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value of the stringREF: " << stringREF << std::endl;
    std::cout << "********************************************" << std::endl;

}