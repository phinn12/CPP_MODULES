#include "Fixed.hpp"

int main( void )
{
    FixedPoint a;
    FixedPoint c;
    FixedPoint b( FixedPoint( 5.05f ) * FixedPoint( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << FixedPoint::max( a, b ) << std::endl;
	a = b = c;
	std::cout << "a is=" << a << std::endl;
	std::cout << "b is=" << b << std::endl;
	std::cout << "c is=" << c << std::endl;
    return 0;
}