#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->rsize = 0;
	this->isize = 0;
}
void PhoneBook::ADD()
{
	std::string 	name;
	std::string 	surname;
	std::string 	username;
	std::string 	number;
	std::string 	darkestsecret;
	unsigned long	num;
	int 			error;

	if (this ->rsize == 8)
		this->rsize = 0;
	if (this -> isize != 8)
		this->isize++;
	while(!std::cin.eof())
	{
		std::cout << "Name :";
		std::getline(std::cin, name);
		if (std::cin.eof())
			break ;
		std::cout << "Surname :";
		std::getline(std::cin, surname);
		if (std::cin.eof())
			break ;
		std::cout << "Username :";
		std::getline(std::cin, username);
		if (std::cin.eof())
			break ;
		while(!std::cin.eof())
		{
			error = 0;
			std::cout <<"Phone Number :";
			std::getline(std::cin, number);
			if (std::cin.eof())
				break ;
			int nx;
			for(nx = 0; number[nx];  nx++)
			{
				if(!std::isdigit(number[nx]))
				{
						std::cout << "Please enter number only!" << std::endl;
					error = 1;
					break;
				}

			}
			if (error == 1)
				continue;
			num = atol(number.c_str());
			if (num > 4294967295)
   			{
       			std::cout << "Phone number is out of valid range!" << std::endl;
        		continue;
    		}
            break;
		}
		if (std::cin.eof())
			break ;
		std::cout << "Darkest Secret :";
		std::getline(std::cin, darkestsecret);
		if (std::cin.eof())
			break ;
		if (name.empty() || surname.empty() || username.empty() || darkestsecret.empty() || number.empty())
		{
			std::cout << "Error: Any Input cannot be empty. Please enter a valid value." << std::endl;
			continue ;
		}
		break ;
	}
	People[this->rsize].SetName(name);
	People[this->rsize].SetSurname(surname);
	People[this->rsize].SetUsername(username);
	People[this->rsize].SetNumber(num);
	People[this->rsize].SetSecret(darkestsecret);
	this->rsize++;
}

std::string PhoneBook::SetLen(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + '.';
	return (str);
}

void PhoneBook::SEARCH()
{
    std::string index;
    int index2;

    if (this->isize == 0)
	{
        std::cout << "PhoneBook is empty" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "Name" << "|"
              << std::setw(10) << "Surname" << "|" << std::setw(10) << "Username" << std::endl;
	int x;
    for (x = 0; x < this->isize; x++)
	{
        std::cout << std::setw(10) << x << "|" << std::setw(10) << SetLen(this->People[x].getName())
                  << "|" << std::setw(10) << SetLen(this->People[x].getSurname()) << "|"
                  << std::setw(10) << SetLen(this->People[x].getUsername()) << std::endl;
    }

    while (!std::cin.eof())
	{
        std::cout << "The index you want to view :";
        std::getline(std::cin, index);
        std::cout << std::endl;
		if (std::cin.eof())
			return;
		if (index.empty() || index.find_first_not_of("0123456789") != std::string::npos)
		{
        	std::cout << "Incorrect index!" << std::endl;
        	continue;
		}

        if (index.length() > 1)
		{
            std::cout << "Incorrect index!" << std::endl;
            continue;
        }

        index2 = std::atoi(index.c_str());
        if (index2 < 0 || index2 >= this->isize)
		{
            std::cout << "Incorrect index!" << std::endl;
            continue;
        }
        break;
    }

    std::cout << std::endl << "Index :" << index2 << std::endl
              << "Name :" << this->People[index2].getName() << std::endl
              << "Surname :" << this->People[index2].getSurname() << std::endl
              << "Username :" << this->People[index2].getUsername() << std::endl
              << "Number :" << this->People[index2].getNumber() << std::endl
              << "Secret :" << this->People[index2].getSecret() << std::endl;
    std::cout << std::endl;
}
