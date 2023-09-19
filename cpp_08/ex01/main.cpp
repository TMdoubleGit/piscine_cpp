/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:40:48 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "-----Test provided by 42-----" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span is " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span is " << sp.longestSpan() << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "-----Additional test #00-----" << std::endl;
	std::cout << "List provided by 42 is " << sp << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "-----Additional test #01-----" << std::endl;
		Span sp2 = Span(3);
		sp2.addNumber(1);
		sp2.addNumber(2);
		sp2.addNumber(3);
		sp2.addNumber(4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << std::endl;
	}
	try
	{
		std::cout << "-----Additional test #02-----" << std::endl;
		Span sp3 = Span(1);
		sp3.addNumber(1);
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << std::endl;
	}
	try
	{
		std::cout << "-----Additional test #03-----" << std::endl;
		Span sp4 = Span(0);
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << std::endl;
	}
	try
	{
		std::cout << "-----Additional test #04-----" << std::endl;
		Span sp5 = Span(10000);
		std::list<int> numbersToAdd;
		for (int i = 0; i < 10000; i++)
			numbersToAdd.push_back(i);
		sp5.addNumber(numbersToAdd.begin() |  numbersToAdd.end());
		std::cout << sp5 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	return 0;
}
