/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:46:06 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/27 14:09:37 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		~PmergeMe();
		PmergeMe & operator=(PmergeMe const & rhs);
};

#endif