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

Fixed::Fixed(): _Nbr(0){}

Fixed::Fixed(int const i)
{
    _Nbr = i << _bit;
}

Fixed::Fixed(float const j)
{
    _Nbr = round(j * (1 << _bit));
}

Fixed::Fixed(const Fixed& src)
{
    *this = src;
}

Fixed::~Fixed(){}



Fixed&  Fixed::operator=(Fixed const& src)
{
	_Nbr = src.getRawBits();
	return (*this);
}

Fixed   Fixed::operator/(Fixed const& rhs) const
{
	return Fixed (toFloat() / rhs.toFloat());
}

Fixed   Fixed::operator-(Fixed const& rhs) const
{
	return Fixed (toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator+(Fixed const& rhs) const
{
	return Fixed (toFloat() + rhs.toFloat());
}

Fixed   Fixed::operator*(Fixed const& rhs) const
{
	return Fixed (toFloat() * rhs.toFloat());
}

Fixed&  Fixed::operator++()
{
	_Nbr++;
    return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp (*this);
	tmp.setRawBits(_Nbr);
    _Nbr++;
	return tmp;
}

Fixed&  Fixed::operator--()
{
	_Nbr--;
    return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp (*this);
	tmp.setRawBits(_Nbr);
    _Nbr--;
	return tmp;
}

bool	Fixed::operator>(Fixed const& rhs) const
{
	return _Nbr > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const& rhs) const
{
	return _Nbr < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const& rhs) const
{
	return _Nbr >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const& rhs) const
{
	return _Nbr <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const& rhs) const
{
	return _Nbr == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const& rhs) const
{
	return _Nbr != rhs.getRawBits(); 
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed const&	Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed const&	Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a > b)
		return a;
	else
		return b;
}

void    Fixed::setRawBits(int const raw)
{
    _Nbr = raw;
}

int Fixed::getRawBits() const
{
    return _Nbr;
}

float	Fixed::toFloat() const
{
	return (float)(_Nbr) / ( 1 << _bit);
}

int	Fixed::toInt() const
{
	return _Nbr >> _bit;
}

std::ostream& operator<<(std::ostream& stream, Fixed const& rhs)
{
	stream << rhs.toFloat();
	return(stream);
}
