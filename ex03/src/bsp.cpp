/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:25:08 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 17:42:13 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

Fixed	triangleArea(Point const a, Point const b, Point const c)
{
	return (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())).abs() / Fixed(2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area1 = triangleArea(point, a, b);
	Fixed	area2 = triangleArea(point, a, c);
	Fixed	area3 = triangleArea(point, b, c);

	// Check that all areas are positive (the point isnt on an edge)
	if (area1.toInt() && area2.toInt() && area3.toInt())
		return (triangleArea(point, a, b) + triangleArea(point, a, c) + triangleArea(point, b, c) == triangleArea(a, b, c));
	return (false);
}
