/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcesbron <lcesbron@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:32:08 by lcesbron          #+#    #+#             */
/*   Updated: 2026/01/14 09:55:35 by lcesbron         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_value;
		static const int	_fractional_bits;
	public:
		Fixed();
		Fixed(Fixed const &toCopy);
		~Fixed();
		Fixed operator=(Fixed const &v);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
