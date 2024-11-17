#include "Fixed.hpp"


FixedPoint::FixedPoint() : raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

FixedPoint::FixedPoint(const FixedPoint &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

FixedPoint &FixedPoint::operator = (const FixedPoint &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		raw = other.getRawBits();
	return *this;
}

FixedPoint::~FixedPoint()
{
	std::cout << "Destructor called" << std::endl;
}

int FixedPoint::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return raw;
}

void FixedPoint::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}
