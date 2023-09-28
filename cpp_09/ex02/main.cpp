/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:40:48 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/28 15:20:18 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	std::string to_check;
	for (int i = 1; i < ac; ++i)
	{
		to_check = av[i];
		if (to_check.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Error: invalid input." << std::endl;
			return (1);
		}
	}
	if (ac < 2)
	{
		std::cout << "Usage: ./PmergeMe \"list of unsorted numbers\"" << std::endl;
		return (1);
	}
	std::deque<int> numbers;
	std::cout << "Before: ";
	for (int i = 1; i < ac; ++i)
	{
		numbers.push_back(std::atoi(av[i]));
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
	PmergeMe<std::deque<int>> d_sorter;
	std::deque<int> sortedList = d_sorter.sort(numbers);
	// PmergeMe<std::list<int>> l_sorter;
	// std::list<int> sortedList2 = l_sorter.sort(numbers);
	std::cout << "After: ";
	for (std::deque <int>::iterator it = sortedList.begin() ; it != sortedList.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << d_sorter.getDurationDeque() << " us" << std::endl;
	// std::cout << "Time to process a range of " << ac - 1 << " elements with std::list : " << l_sorter.getDurationList() << " us" << std::endl;
	return (0);
}