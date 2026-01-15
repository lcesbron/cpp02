/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:20:13 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 17:20:51 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(float const x, float const y): _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(Point const &toCopy): _x(Fixed(toCopy._x)), _y(Fixed(toCopy._y)) {}

Point::~Point(void) {}

Point	Point::operator=(Point const &p)
{
	(void)p;
	return (Point(0, 0));
}

Fixed const	&Point::getX(void) const
{
	return (this->_x);
}

Fixed const	&Point::getY(void) const
{
	return (this->_y);
}
