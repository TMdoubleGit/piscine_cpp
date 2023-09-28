/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:46:02 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/28 15:16:14 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
PmergeMe<Container>::PmergeMe()
{
}

template <typename Container>
PmergeMe<Container>::PmergeMe(PmergeMe const & src)
{
	*this = src;
}

template <typename Container>
PmergeMe<Container>::~PmergeMe()
{
}

template <typename Container>
PmergeMe<Container> & PmergeMe<Container>::operator=(PmergeMe const & rhs)
{
	(void)rhs;
	return *this;
}

template <typename Container>
Container PmergeMe<Container>::createAndSortPairs(const Container &input)
{
	Container pairs;
	for (size_t i = 0; i < input.size(); i += 2)
	{
		if (i + 1 < input.size())
		{
			int first = input.at(i);
			int second = input.at(i + 1);
			if (first > second)
				std::swap(first, second);
			pairs.push_back(std::make_pair(first, second));
		}
		else
		{
			pairs.push_back(std::make_pair(input.at(i), std::numeric_limits<int>::max()));
		}
	}
	return pairs;
}

template <typename Container>
Container PmergeMe<Container>::sort(const Container &input)
{
	this->_duration_deque = clock();
	std::deque< std::pair<int, int> > pairs = createAndSortPairs(input);
	this->_duration_deque = clock() - _duration_deque;
	this->_duration_deque = ((float)(this->_duration_deque) / CLOCKS_PER_SEC) * 1000000;
	this->_duration_list = clock();
	Container sortedList;

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		sortedList.push_back(pairs[i].first);
	}

	sortedList.sort();

	for (size_t i = 0; i < pairs.size(); ++i)
	{
		if(pairs[i].second != std::numeric_limits<int>::max())
		{
			std::list<int>::iterator it = sortedList.begin();
			while(it != sortedList.end() && *it < pairs[i].second)
			{
				++it;
			}
			sortedList.insert(it, pairs[i].second);
		}
	}
	this->_duration_list = clock() - this->_duration_list;
	this->_duration_list = ((float)(this->_duration_list) / CLOCKS_PER_SEC) * 1000000;
	return sortedList;
}

template <typename Container>
clock_t PmergeMe<Container>::getDurationDeque()
{
	return (this->_duration_deque);
}

template <typename Container>
clock_t PmergeMe<Container>::getDurationList()
{
	return (this->_duration_list);
}