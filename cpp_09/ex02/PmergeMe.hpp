/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:46:06 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/29 20:04:00 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <limits>
#include <vector>
#include <sstream>
#include <iostream>
#include <type_traits>
#include <ctime>

template <typename T>
class PmergeMe
{
private:
    clock_t _duration_deque;
    clock_t _duration_list;

    std::vector<std::pair<typename T::value_type, typename T::value_type>> 
    createAndSortPairs(const T &input);

public:
    PmergeMe();
    PmergeMe(const PmergeMe& src);
    ~PmergeMe();
    PmergeMe& operator=(const PmergeMe& rhs);

    T sort(const T &input);
    clock_t getDurationDeque();
    clock_t getDurationList();
};

#endif
