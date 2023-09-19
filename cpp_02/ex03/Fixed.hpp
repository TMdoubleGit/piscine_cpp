/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:39:21 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &ref);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed	&operator=(const Fixed &ref);
		
		int		toInt(void) const;
		float	toFloat(void) const;
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		bool	operator>(const Fixed &ref) const;
		bool	operator>=(const Fixed &ref) const;
		bool	operator<(const Fixed &ref) const;
		bool	operator<=(const Fixed &ref) const;
		bool	operator==(const Fixed &ref) const;
		bool	operator!=(const Fixed &ref) const;

		Fixed	operator+(const Fixed &ref) const;
		Fixed	operator-(const Fixed &ref) const;
		Fixed	operator*(const Fixed &ref) const;
		Fixed	operator/(const Fixed &ref) const;

		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		static const Fixed	&min(const Fixed &a |  const Fixed &b);
		static const Fixed	&max(const Fixed &a |  const Fixed &b);
		static Fixed	&min(Fixed &a |  Fixed &b);
		static Fixed	&max(Fixed &a |  Fixed &b);
		
};

std::ostream	&operator<<(std::ostream &os |  const Fixed &ref);
std::istream	&operator>>(std::istream &is |  Fixed &ref);

#endif