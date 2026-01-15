/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:00:54 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/14 09:55:32 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int const	Fixed::_fractional_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const & toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = toCopy._value;
}

Fixed::Fixed(int const v)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = v << this->_fractional_bits;
}

Fixed::Fixed(float const v)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(v * (1 << this->_fractional_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &v)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = v._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_fractional_bits);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}
