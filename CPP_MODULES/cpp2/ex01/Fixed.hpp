#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class FixedPoint
{
private:
	int raw;
	static const int fract_bits = 8;

public:
	FixedPoint();
	FixedPoint(const FixedPoint &other);	
	FixedPoint &operator=(const FixedPoint &other);	
	int getRawBits(void) const;	
	void setRawBits(int const raw);
	FixedPoint(int value);
	FixedPoint(const float value);
	float toFloat(void) const;
	int toInt(void) const;
	~FixedPoint();
};
std::ostream &operator << (std::ostream &output, const FixedPoint &fixed);
#endif