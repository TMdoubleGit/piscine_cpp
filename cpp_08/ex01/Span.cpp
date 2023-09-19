/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:32:23 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/19 13:46:52 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		_n = src._n;
		_list = src._list;
	}
	return (*this);
}

std::list<int> Span::getList() const
{
	return (_list);
}

std::ostream &operator<<(std::ostream &o |  const Span &src)
{
	std::list<int> list = src.getList();
	for (std::list<int>::const_iterator it = list.begin(); it != list.end(); ++it)
		o << *it << " ";
	return (o);
}


void	Span::addNumber(int n)
{
	std::cout << "Trying to add " << n << " to the list" << std::endl;
	if (_list.size() < _n)
	{
		_list.push_back(n);
		std::cout << "Added " << n << " to the list" << std::endl;
	}
	else
		throw Span::SpanFullException();
}

void	Span::addNumber(std::list<int>::const_iterator begin |  std::list<int>::const_iterator end)
{
	std::cout << "Trying to add a range of numbers to the list" << std::endl;
	if (_list.size() + std::distance(begin |  end) <= _n)
	{
		_list.insert(_list.end() |  begin |  end);
		std::cout << "Added a range of numbers to the list" << std::endl;
	}
	else
		throw Span::SpanFullException();
}

int	Span::shortestSpan() const
{
	if (_list.size() < 2)
		throw Span::SpanException();
	int min = 2147483647;
	std::list<int>::const_iterator it = _list.begin();
	for (std::list<int>::const_iterator it2 = std::next(it); it2 != _list.end(); ++it2)
	{
		if (abs(*it - *it2) < min)
			min = abs(*it - *it2);
		it++;
	};
	return (min);
}

int	Span::longestSpan() const
{
	if (_list.size() < 2)
		throw Span::SpanException();
	int max = 0;
	std::list<int>::const_iterator it = _list.begin();
	for (std::list<int>::const_iterator it2 = std::next(it); it2 != _list.end(); ++it2)
	{
		if (abs(*it - *it2) > max)
			max = abs(*it - *it2);
		it++;
	};
	return (max);
}