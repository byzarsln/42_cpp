/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:09:56 by beyarsla          #+#    #+#             */
/*   Updated: 2025/04/20 17:09:57 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath> 

class Fixed
{
    private:
        int fixedPoint;
        const static int _fractionalBits = 8;

    public:
        Fixed();
        ~Fixed();

        Fixed(const int fixed);
        Fixed(const float fixed);
        Fixed(const Fixed& fixed);
        Fixed &operator = (const Fixed &fixed);

        float toFloat(void) const;
        int toInt(void) const;

        bool operator > (const Fixed &fixed);
        bool operator < (const Fixed &fixed);
        bool operator >= (const Fixed &fixed);
        bool operator <= (const Fixed &fixed);
        bool operator == (const Fixed &fixed);
        bool operator != (const Fixed &fixed);

        float operator + (const Fixed &fixed);
        float operator - (const Fixed &fixed);
        float operator * (const Fixed &fixed);
        float operator / (const Fixed &fixed);

        Fixed& operator ++ ();
        Fixed& operator -- ();
        Fixed operator ++ (int);
        Fixed operator -- (int);

        static Fixed &min(Fixed &fixed1, Fixed &fixed2);
        static Fixed &max(Fixed &fixed1, Fixed &fixed2);

        static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
        static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif