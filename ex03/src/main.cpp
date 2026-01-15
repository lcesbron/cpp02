/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:00:57 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 17:42:46 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(0.0f, 10.0f);

	Point p1(3.0f, 3.0f);
	std::cout << "Point inside triangle : " << (bsp(a, b, c, p1) ? "INSIDE" : "OUTSIDE") << std::endl;

	Point p2(0.0f, 0.0f);
	std::cout << "Point on vertex : " << (bsp(a, b, c, p2) ? "INSIDE" : "OUTSIDE") << std::endl;

	Point p3(5.0f, 0.0f);
	std::cout << "Point on edge : " << (bsp(a, b, c, p3) ? "INSIDE" : "OUTSIDE") << std::endl;

	Point p4(10.0f, 10.0f);
	std::cout << "Point outside triangle : " << (bsp(a, b, c, p4) ? "INSIDE" : "OUTSIDE") << std::endl;

	Point p5(0.1f, 0.1f);
	std::cout << "Point near edge (inside) : " << (bsp(a, b, c, p5) ? "INSIDE" : "OUTSIDE") << std::endl;

	Point d(0.0f, 10.0f);
	Point e(10.0f, 0.0f);
	Point f(0.0f, 0.0f);
	Point p6(3.0f, 3.0f);
	std::cout << "Inside inverted triangle : " << (bsp(d, e, f, p6) ? "INSIDE" : "OUTSIDE") << std::endl;

	Point p7(-42.0f, 42.0f);
	std::cout << "Point far away : " << (bsp(a, b, c, p7) ? "INSIDE" : "OUTSIDE") << std::endl;

	return 0;
}
