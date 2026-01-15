/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:32:08 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/15 14:06:03 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_fractional_bits;
	public:
		Fixed();
		Fixed(Fixed const &toCopy);
		Fixed(int const v);
		Fixed(float const v);
		~Fixed();
		Fixed	&operator=(Fixed const &v);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		operator>(Fixed const &toCompare) const;
		int		operator<(Fixed const &toCompare) const;
		int		operator>=(Fixed const &toCompare) const;
		int		operator<=(Fixed const &toCompare) const;
		int		operator!=(Fixed const &toCompare) const;
		int		operator==(Fixed const &toCompare) const;
		Fixed	operator+(Fixed const &toAdd) const;
		Fixed	operator-(Fixed const &toSub) const;
		Fixed	operator*(Fixed const &toMult) const;
		Fixed	operator/(Fixed const &toDiv) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);
		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		
};

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed);

#endif
