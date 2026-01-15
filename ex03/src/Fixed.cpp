/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:00:54 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 17:41:08 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int const	Fixed::_fractional_bits = 8;

Fixed::Fixed(void)
{
	this->_value = 0;
}

Fixed::Fixed(Fixed const & toCopy)
{
	this->_value = toCopy._value;
}

Fixed::Fixed(int const v)
{
	this->_value = v << this->_fractional_bits;
}

Fixed::Fixed(float const v)
{
	this->_value = roundf(v * (1 << this->_fractional_bits));
}

Fixed::~Fixed(void) {}

Fixed	Fixed::abs(void) const
{
	int	mask = this->_value >> (sizeof(int) * sizeof(char) * 8 - 1);
	return (this->_value + mask) ^ mask;
}
