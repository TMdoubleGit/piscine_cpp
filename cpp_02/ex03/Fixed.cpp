/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:38:54 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &ref)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	_value = value << _bits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _bits));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &ref)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	_value = ref.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (float)(1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_value >> _bits);
}

std::ostream	&operator<<(std::ostream &os |  const Fixed &ref)
{
	os << ref.toFloat();
	return (os);
}

std::istream	&operator>>(std::istream &is |  Fixed &ref)
{
	float	value = ref.toFloat();

	is >> value;
	ref = Fixed(value);
	return (is);
}

bool	Fixed::operator>(const Fixed &ref) const
{
	return (_value > ref.getRawBits());
}

bool	Fixed::operator>=(const Fixed &ref) const
{
	return (_value >= ref.getRawBits());
}

bool	Fixed::operator<(const Fixed &ref) const
{
	return (_value < ref.getRawBits());
}

bool	Fixed::operator<=(const Fixed &ref) const
{
	return (_value <= ref.getRawBits());
}

bool	Fixed::operator==(const Fixed &ref) const
{
	return (_value == ref.getRawBits());
}

bool	Fixed::operator!=(const Fixed &ref) const
{
	return (_value != ref.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &ref) const
{
	return (Fixed(toFloat() + ref.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &ref) const
{
	return (Fixed(toFloat() - ref.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &ref) const
{
	return (Fixed(toFloat() * ref.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &ref) const
{
	if (ref.toFloat() == 0)
	{
		std::cout << "Error: division by zero" << std::endl;
		return (Fixed(0));
	}
	return (Fixed(toFloat() / ref.toFloat()));
}

Fixed	&Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;

	operator++();
	return (old);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;

	operator--();
	return (old);
}

const Fixed	&Fixed::min(const Fixed &a |  const Fixed &b)
{
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a |  const Fixed &b)
{
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

Fixed	&Fixed::min(Fixed &a |  Fixed &b)
{
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed	&Fixed::max(Fixed &a |  Fixed &b)
{
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

