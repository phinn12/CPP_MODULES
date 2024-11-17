#include "Contact.hpp"

void Contact::SetName(std::string name)
{
    this->name = name;
}

void Contact::SetSurname(std::string surname)
{
    this->surname = surname;
}

void Contact::SetUsername(std::string username)
{
    this->username = username;
}

void Contact::SetNumber(unsigned long number)
{
    this->num = number;
}

void Contact::SetSecret(std::string darkestsecret)
{
    this->darkestsecret = darkestsecret;
}

std::string Contact::getName()
{
    return (this->name);
}

std::string Contact::getSurname()
{
    return (this->surname);
}

std::string Contact::getUsername()
{
    return (this->username);
}

unsigned long Contact::getNumber()
{
    return (this->num);
}

std::string Contact::getSecret()
{
    return (this->darkestsecret);
}
