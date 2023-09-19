/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:39:36 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/28 23:17:00 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main ( void )
{
	float	x;
	float	y;
	
	std::cout << "Enter the coordinates of the triangle's points and the point to check if it's in the triangle" << std::endl;
	std::cout << "The coordinates must be numeric values" << std::endl;
	std::cout << "Enter A's value for x: " << std::endl;
	std::cin >> x;
	// while (std::isdigit(x) == false)
	// {
	// 	std::cout << "Error: invalid input" << std::endl;
	// 	std::cout << "Please enter a valid number: " << std::endl;
	// 	std::cin.clear();
	// 	std::cin.ignore();
	// 	std::cin >> x;
	// }
	std::cout << "Enter A's value for y: " << std::endl;
	std::cin >> y;
	Point A(x, y);
	std::cout << "We have A(" << A.getX() << ", " << A.getY() << ")" << std::endl;
	std::cout << "Enter B's value for x: " << std::endl;
	std::cin >> x;
	std::cout << "Enter B's value for y: " << std::endl;
	std::cin >> y;
	Point B(x, y);
	std::cout << "We have B(" << B.getX() << ", " << B.getY() << ")" << std::endl;
	std::cout << "Enter C's value for x: " << std::endl;
	std::cin >> x;
	std::cout << "Enter C's value for y: " << std::endl;
	std::cin >> y;
	Point C(x, y);
	std::cout << "We have C(" << C.getX() << ", " << C.getY() << ")" << std::endl;
	std::cout << "Enter P's value for x: " << std::endl;
	std::cin >> x;
	std::cout << "Enter P's value for y: " << std::endl;
	std::cin >> y;
	Point P(x, y);
	std::cout << "We have P(" << P.getX() << ", " << P.getY() << ")" << std::endl;
	
	if ( bsp(A, B, C, P ) == true ) {
		std::cout << "Point is in the triangle" << std::endl;
	} else {
		std::cout << "Point is not in the triangle" << std::endl;
	}
	return 0;
}