/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:12:47 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> a;
	Array<int> b(5);
	try
	{
		std::cout << "------ Test 0 ------" << std::endl;
		std::cout << "Size(b): " << b.size() << std::endl;
		for (unsigned int i (0); i < b.size(); i++)
		{
			std::cout << "b[" << i << "] = " << b[i] << " ";
			b[i] = i;
		}
		
		std::cout << std::endl << std::endl <<"------ Test 1 ------" << std::endl;
		Array <int> c(b);
		for (unsigned int i(0); i < c.size(); i++)
			std::cout << "c[" << i << "] = " << c[i] << " ";
		
		std::cout << std::endl << std::endl <<"------ Test 2 ------" << std::endl;
		Array <int> d(3);
		std::cout << "Size(d): " << d.size() << std::endl;
		for (unsigned int i(0); i < d.size(); i++)
			std::cout << "d[" << i << "] = " << d[i] << " ";
		d = c;
		std::cout << "After operating d = c |  we get:" << std::endl;
		std::cout << "New size(d): " << d.size() << std::endl;
		for (unsigned int i(0); i < d.size(); i++)
			std::cout << "new d[" << i << "] = " << d[i] << " ";
		
		std::cout << std::endl << std::endl <<"------ Test 3 ------" << std::endl;
		Array <int> e(2);
		for (unsigned int i(0); i < 10; i++)
			std::cout << "e[" << i << "] = " << e[i] << " ";
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}