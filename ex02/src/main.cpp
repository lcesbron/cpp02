/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:00:57 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 14:15:46 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	std::cout << "1 > 2 = " << (Fixed(1) > Fixed(2)) << std::endl;
	std::cout << "-1 < 2 = " << (Fixed(-1) < Fixed(2)) << std::endl;
	std::cout << "2 >= 2 = " << (Fixed(2) >= Fixed(2)) << std::endl;
	std::cout << "1 <= 2 = " << (Fixed(1) <= Fixed(2)) << std::endl;
	std::cout << "1 == 1 = " << (Fixed(1) == Fixed(1)) << std::endl;
	std::cout << "1 != 1 = " << (Fixed(1) != Fixed(1)) << std::endl;

	std::cout << "34 + 35 = " << (Fixed(34) + Fixed(35)) << std::endl;
	std::cout << "34 - 35 = " << (Fixed(34) - Fixed(35)) << std::endl;
	std::cout << "101 / 10 = " << (Fixed(101) / Fixed(10)) << std::endl;
	std::cout << "34 * 35 = " << (Fixed(34) * Fixed(35)) << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
