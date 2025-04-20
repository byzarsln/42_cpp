/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:08:41 by beyarsla          #+#    #+#             */
/*   Updated: 2025/04/20 17:08:42 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPoint = roundf(f * (1 << this->_fractionalBits));
}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPoint = i << this->_fractionalBits;
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fixed)
        this->fixedPoint = fixed.fixedPoint;
    return (*this);
}

int  Fixed::toInt(void) const 
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
