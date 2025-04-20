/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:09:52 by beyarsla          #+#    #+#             */
/*   Updated: 2025/04/20 17:09:53 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPoint = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(const int fixed)
{
    this->fixedPoint = fixed << this->_fractionalBits;
}

Fixed::Fixed(const float fixed)
{
    this->fixedPoint = roundf(fixed * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed& fixed)
{
    *this = fixed;
}

Fixed& Fixed::operator = (const Fixed &fixed)
{
    if(this != &fixed)
        this->fixedPoint = fixed.fixedPoint;
    return (*this);
}

int Fixed::toInt(void) const
{
    return (this->fixedPoint >> this->_fractionalBits);
}

float Fixed::toFloat(void) const 
{
    return (float)(this->fixedPoint / (float)(1 << this->_fractionalBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

bool Fixed::operator > (const Fixed &fixed)
{
    return (this->fixedPoint > fixed.fixedPoint);
}

bool Fixed::operator < (const Fixed &fixed)
{
    return (this->fixedPoint < fixed.fixedPoint);
}

bool Fixed::operator >= (const Fixed &fixed)
{
    return (this->fixedPoint >= fixed.fixedPoint);
}

bool Fixed::operator <= (const Fixed &fixed)
{
    return (this->fixedPoint <= fixed.fixedPoint);
}

bool Fixed::operator == (const Fixed &fixed)
{
    return (this->fixedPoint == fixed.fixedPoint);
}

bool Fixed::operator != (const Fixed &fixed)
{
    return (this->fixedPoint != fixed.fixedPoint);
}

float Fixed::operator + (const Fixed &fixed)
{
   return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator - (const Fixed &fixed)
{
    return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator * (const Fixed &fixed)
{
    return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator / (const Fixed &fixed)
{
    return (this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator ++ ()
{
    this->fixedPoint++;
    return (*this);
}

Fixed &Fixed::operator -- ()
{
    this->fixedPoint--;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed tmp = *this;
    this->fixedPoint++;
    return (tmp);
}

Fixed Fixed::operator -- (int)
{
    Fixed tmp = *this;
    this->fixedPoint--;
    return (tmp); 
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if(fixed1.toFloat() <= fixed2.toFloat())
            return fixed1;
        return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if(fixed1.toFloat() >= fixed2.toFloat())
        return fixed1;
    return fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
    if(fixed1.toFloat() <= fixed2.toFloat())
        return fixed1;
    return fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
    if(fixed1.toFloat() >= fixed2.toFloat())
        return fixed1;
    return fixed2;
}
