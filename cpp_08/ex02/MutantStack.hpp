/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:02:27 by tmichel-          #+#    #+#             */
/*   Updated: 2023/09/18 17:52:19 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <deque>

template <typename T, class Container = std::deque <T>>
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(){};
		
		MutantStack(const MutantStack &src)
		{
			*this = src;
		}
		
		virtual ~MutantStack(){};
		
		MutantStack &operator=(const MutantStack &src)
		{
			std::stack<T, Container>::operator=(src);
			return (*this);
		};

		typedef typename Container::iterator    iterator;
		iterator begin()
		{
			return (this->c.begin());
		};
		
		iterator end()
		{
			return (this->c.end());
		};
};

#endif