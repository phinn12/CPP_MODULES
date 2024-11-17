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

FixedPoint &FixedPoint::operator=(const FixedPoint &other)
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
	return raw;
}

void FixedPoint::setRawBits(int const raw)
{
	this->raw = raw;
}

FixedPoint::FixedPoint(int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = value << fract_bits;
}

FixedPoint::FixedPoint(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this -> raw = (int)roundf(value * (1 << fract_bits));
}

float FixedPoint::toFloat(void) const
{
	return((float) this -> raw / (1 << fract_bits));
}

int FixedPoint::toInt(void) const
{
	return (this->raw >> this->fract_bits);
}

std::ostream &operator << (std::ostream &output, const FixedPoint &fixed)
{
    output << fixed.toFloat();
    return output;
}