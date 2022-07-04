/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:36:17 by msosnova          #+#    #+#             */
/*   Updated: 2022/05/26 18:36:24 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed(): _Nbr(0)
{
    std::cout << "Default constructor colled" << std::endl;
}

Fixed::Fixed(int const i)
{
    _Nbr = i <<_bit;
    std::cout << "Int contructor called" << std::endl;
}

Fixed::Fixed(float const j)
{
    _Nbr = round(j * (1 << _bit));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl; 
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" <<std::endl;
    _Nbr = raw;
}

int Fixed::getRawBits() const
{
    return _Nbr;
}

Fixed& Fixed::operator=(Fixed const& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_Nbr = src.getRawBits();
	return *this;
}

float	Fixed::toFloat() const
{
	return (float)(_Nbr) / (float)(1 << _bit);
}

int	Fixed::toInt() const
{
	return _Nbr >> _bit;
}

std::ostream&   operator<<(std::ostream& stream, Fixed const& rhs)
{
	stream << rhs.toFloat();
	return stream;
}
