#include "Fixed.hpp"

FixedPoint::FixedPoint() : raw(0)
{
}

FixedPoint::FixedPoint(const FixedPoint &other)
{
	*this = other;
}

FixedPoint &FixedPoint::operator=(const FixedPoint &other)
{
	if (this != &other)
		raw = other.getRawBits();
	return *this; 
}

FixedPoint::~FixedPoint(){}

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
	this->raw = value << fract_bits;
}

FixedPoint::FixedPoint(const float value)
{
	this -> raw = (int)roundf(value * (1 << fract_bits));
}

float FixedPoint::toFloat(void) const
{
	return((float) this->raw / (1 << fract_bits));
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
FixedPoint &FixedPoint::operator++()
{
	this->raw++;
	return (*this);
}

FixedPoint FixedPoint::operator++(int)
{
	FixedPoint tmp = *this;
	this->raw++;
	return(tmp);
}
FixedPoint &FixedPoint::operator--()
{
	this->raw--;
	return (*this);
}
FixedPoint FixedPoint::operator--(int)
{
	FixedPoint tmp = *this;
	this->raw--;
	return(tmp);
}

FixedPoint &FixedPoint::min(FixedPoint &r1, FixedPoint &r2)
{
	return ((r1.raw > r2.getRawBits()) ? r2 : r1);
}
FixedPoint& FixedPoint::max(FixedPoint &r1, FixedPoint &r2)
{
    return ((r1.raw > r2.getRawBits()) ? r1 : r2);
}

const FixedPoint& FixedPoint::min(const FixedPoint &r1, const FixedPoint &r2)
{
    return ((r1.raw > r2.getRawBits()) ? r2 : r1);
}
const FixedPoint& FixedPoint::max(const FixedPoint &r1, const FixedPoint &r2)
{
    return ((r1.raw > r2.getRawBits()) ? r1 : r2);
}

bool FixedPoint::operator < (const FixedPoint &r) const
{
    return  (this->raw < r.getRawBits());
}
bool FixedPoint::operator > (const FixedPoint &r) const
{
    return (this->raw > r.getRawBits());
}
bool FixedPoint::operator >= (const FixedPoint &r) const
{
    return (this->raw >= r.getRawBits());
}
bool FixedPoint::operator <= (const FixedPoint &r) const
{
    return (this->raw <= r.getRawBits());
}
bool FixedPoint::operator == (const FixedPoint &r) const
{
    return (this->raw == r.getRawBits());
}
bool FixedPoint::operator != (const FixedPoint &r) const
{
    return (this->raw != r.getRawBits());
}
float FixedPoint::operator + (const FixedPoint &r) const
{
    return (this->toFloat() + r.toFloat());
}
float FixedPoint::operator - (const FixedPoint &r) const
{
    return (this->toFloat() - r.toFloat());
}
float FixedPoint::operator / (const FixedPoint &r) const
{
    return (this->toFloat() / r.toFloat());
}
float FixedPoint::operator * (const FixedPoint &r) const
{
    return (this->toFloat() * r.toFloat());
}