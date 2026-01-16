/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operators.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:00:54 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 11:17:40 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed	&Fixed::operator=(Fixed const &v)
{
	if (this != &v)
		this->_value = v._value;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}

int	Fixed::operator>(Fixed const &toCompare) const
{
	return (this->_value > toCompare._value);
}

int	Fixed::operator<(Fixed const &toCompare) const
{
	return (this->_value < toCompare._value);
}

int	Fixed::operator>=(Fixed const &toCompare) const
{
	return (this->_value >= toCompare._value);
}

int	Fixed::operator<=(Fixed const &toCompare) const
{
	return (this->_value <= toCompare._value);
}

int	Fixed::operator==(Fixed const &toCompare) const
{
	return (this->_value == toCompare._value);
}

int	Fixed::operator!=(Fixed const &toCompare) const
{
	return (this->_value != toCompare._value);
}

Fixed	Fixed::operator+(Fixed const &toAdd) const
{
	Fixed	ret;

	ret._value = this->_value + toAdd._value;
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &toSub) const
{
	Fixed	ret;

	ret.setRawBits(this->_value - toSub._value);
	return (ret);
}

Fixed	Fixed::operator*(Fixed const &toMult) const
{
	Fixed	ret;

	ret.setRawBits((this->_value * toMult._value) / (1 << this->_fractional_bits));
	return (ret);
}

Fixed	Fixed::operator/(Fixed const &toDiv) const
{
	Fixed	ret;

	ret.setRawBits((this->_value / toDiv._value) * (1 << this->_fractional_bits));
	return (ret);
}

// PRE
Fixed	&Fixed::operator++(void)
{
	++this->_value;
	return (*this);
}

// POST
Fixed	Fixed::operator++(int)
{
	Fixed	ret;

	ret = *this;
	++this->_value;
	return (ret);
}

// PRE
Fixed	&Fixed::operator--(void)
{
	--this->_value;
	return (*this);
}

//POST
Fixed	Fixed::operator--(int)
{
	Fixed	ret;

	ret = *this;
	--this->_value;
	return (ret);
}
