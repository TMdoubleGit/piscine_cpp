/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:39:46 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/28 22:58:27 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
		
	public:
		Point();
		Point(const Point &ref);
		Point(const float x, const float y);
		~Point();
		Point   &operator=(const Point &ref);
		
		Fixed   getX() const;
		Fixed   getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif