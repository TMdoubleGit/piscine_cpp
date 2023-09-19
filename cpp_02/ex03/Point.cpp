/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:39:40 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0) |  _y(0)
{
}

Point::Point(const Point &ref) : _x(ref._x) |  _y(ref._y)
{
}

Point::Point(const float x |  const float y) : _x(x) |  _y(y)
{
}

Point::~Point()
{
}

Point   &Point::operator=(const Point &ref)
{
    *this = ref;
    return (*this);
}

Fixed   Point::getX() const
{
    return (_x);
}

Fixed   Point::getY() const
{
    return (_y);
}