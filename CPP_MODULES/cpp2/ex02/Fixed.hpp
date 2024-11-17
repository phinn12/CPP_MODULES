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
	FixedPoint &operator++();
	FixedPoint operator++(int);
	FixedPoint &operator--();
	FixedPoint operator--(int);
	static FixedPoint &min(FixedPoint &r1, FixedPoint &r2);
	static FixedPoint &max(FixedPoint &r1, FixedPoint &r2);
	const static FixedPoint &min(const FixedPoint &r1, const FixedPoint &r2);
	const static FixedPoint &max(const FixedPoint &r1, const FixedPoint &r2);
	bool operator < (const FixedPoint &r) const;
	bool operator > (const FixedPoint &r) const;
	bool operator >= (const FixedPoint &r) const;
	bool operator <= (const FixedPoint &r) const;
	bool operator == (const FixedPoint &r) const;
	bool operator != (const FixedPoint &r) const;
	float operator + (const FixedPoint &r) const;
	float operator - (const FixedPoint &r) const;
	float operator / (const FixedPoint &r) const;
	float operator * (const FixedPoint &r) const;
	~FixedPoint();

};
std::ostream &operator << (std::ostream &output, const FixedPoint &fixed);
#endif