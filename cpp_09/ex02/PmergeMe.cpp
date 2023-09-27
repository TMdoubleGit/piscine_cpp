/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:46:02 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/27 16:03:56 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs)
{
	(void)rhs;
	return *this;
}

