#include <iostream>

class Contact
{
private:
	std::string name;
	std::string surname;
	std::string username;
    unsigned long num;
	std::string darkestsecret;
public:
  	void SetName(std::string name);
    void SetSurname(std::string surname);
	void SetUsername(std::string username);
	void SetNumber(unsigned long number);
    void SetSecret(std::string darkestsecret);
    std::string getName();
    std::string getSurname();
    std::string getUsername();
    unsigned long getNumber();
    std::string getSecret();
        

};

