/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:46:02 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/29 20:15:53 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
PmergeMe<T>::PmergeMe()
{
}

template <typename T>
PmergeMe<T>::PmergeMe(const PmergeMe& src)
{
    *this = src;
}

template <typename T>
PmergeMe<T>::~PmergeMe()
{
}

template <typename T>
PmergeMe<T>& PmergeMe<T>::operator=(const PmergeMe& rhs)
{
    (void)rhs;
    return *this;
}

template <typename T>
std::vector<std::pair<typename T::value_type, typename T::value_type>> 
PmergeMe<T>::createAndSortPairs(const T &input)
{
    std::vector<std::pair<typename T::value_type, typename T::value_type>> pairs;
    typename T::const_iterator it = input.begin();
    while(it != input.end())
    {
        typename T::value_type first = *it;
        ++it;

        typename T::value_type second;
        if(it != input.end())
        {
            second = *it;
            ++it;
        }
        else
        {
            second = std::numeric_limits<typename T::value_type>::max();
        }

        if(first > second)
            std::swap(first, second);

        pairs.push_back(std::make_pair(first, second));
    }
    return pairs;
}

template <typename T>
T PmergeMe<T>::sort(const T &input)
{
    this->_duration_list = clock();
    this->_duration_deque = clock();
    std::vector<std::pair<int, int> > pairs = createAndSortPairs(input);

    T sortedList;

    for(size_t i = 0; i < pairs.size(); ++i)
    {
        sortedList.push_back(pairs[i].first);
        if(pairs[i].second != std::numeric_limits<int>::max())
        {
            sortedList.push_back(pairs[i].second);
        }
    }
	
	std::sort(sortedList.begin(), sortedList.end());

    this->_duration_list = clock() - this->_duration_list;
    this->_duration_list = ((float)(this->_duration_list) / CLOCKS_PER_SEC) * 1000000;
	this->_duration_deque = clock() - _duration_deque;
    this->_duration_deque = ((float)(this->_duration_deque) / CLOCKS_PER_SEC) * 1000000;
    return sortedList;
}

template <>
std::list<int> PmergeMe<std::list<int>>::sort(const std::list<int> &input)
{
    this->_duration_list = clock();
    this->_duration_deque = clock();
    std::vector<std::pair<int, int> > pairs = createAndSortPairs(input);

    std::list<int> sortedList;

    for(size_t i = 0; i < pairs.size(); ++i)
    {
        sortedList.push_back(pairs[i].first);
        if(pairs[i].second != std::numeric_limits<int>::max())
        {
            sortedList.push_back(pairs[i].second);
        }
    }
	
    sortedList.sort();

    this->_duration_list = clock() - this->_duration_list;
    this->_duration_list = ((float)(this->_duration_list) / CLOCKS_PER_SEC) * 1000000;
	this->_duration_deque = clock() - _duration_deque;
    this->_duration_deque = ((float)(this->_duration_deque) / CLOCKS_PER_SEC) * 1000000;
    return sortedList;
}

template <>
std::deque<int> PmergeMe<std::deque<int>>::sort(const std::deque<int> &input)
{
    this->_duration_list = clock();
    this->_duration_deque = clock();
    std::vector<std::pair<int, int> > pairs = createAndSortPairs(input);

    std::deque<int> sortedList;

    for(size_t i = 0; i < pairs.size(); ++i)
    {
        sortedList.push_back(pairs[i].first);
        if(pairs[i].second != std::numeric_limits<int>::max())
        {
            sortedList.push_back(pairs[i].second);
        }
    }
	
    std::sort(sortedList.begin(), sortedList.end());

    this->_duration_list = clock() - this->_duration_list;
    this->_duration_list = ((float)(this->_duration_list) / CLOCKS_PER_SEC) * 1000000;
	this->_duration_deque = clock() - _duration_deque;
    this->_duration_deque = ((float)(this->_duration_deque) / CLOCKS_PER_SEC) * 1000000;
    return sortedList;
}

template <typename T>
clock_t PmergeMe<T>::getDurationDeque()
{
    return this->_duration_deque;
}

template <typename T>
clock_t PmergeMe<T>::getDurationList()
{
    return this->_duration_list;
}

template class PmergeMe<std::list<int>>;
template class PmergeMe<std::deque<int>>;
