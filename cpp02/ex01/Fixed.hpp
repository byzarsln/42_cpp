#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 fixedPoint;
    const static int    _fractionalBits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int fixed);
    Fixed(const float fixed);
    Fixed &operator=(const Fixed &fixed);

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif