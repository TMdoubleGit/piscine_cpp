/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:46:06 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/28 15:15:34 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <deque>
# include <list>
# include <string>
# include <algorithm>
# include <limits>
# include <vector>
# include <sstream>
# include <iostream>
# include <ctime>


template <typename Container>
class PmergeMe
{
	private:
		clock_t _duration_deque;
		clock_t _duration_list;
		
		Container createAndSortPairs(const Container &input);

	public:
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		~PmergeMe();
		PmergeMe & operator=(PmergeMe const & rhs);
		
		Container sort(const Container &input);
		clock_t getDurationDeque();
		clock_t getDurationList();
};

#endif