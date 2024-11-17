#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class FixedPoint
{
private:
	int raw;  // Sabit noktalı sayının ham değeri
	static const int fract_bits = 8;

public:
	// Varsayılan kurucu
	FixedPoint();	
	// Kopya kurucusu
	FixedPoint(const FixedPoint &other);	
	// Kopya atama operatörü
	FixedPoint &operator=(const FixedPoint &other);	
	// Yıkıcı
	~FixedPoint();	
	// Ham değeri döndüren üye işlev
	int getRawBits(void) const;	
	// Ham değeri ayarlayan üye işlev
	void setRawBits(int const raw);
};

#endif
